"""
This script is used to generate lighthouse stimulus for use in simutation.
"""

NUM_LH_SENSORS = 3
def bits(num_bits, value):
    return "%d'b%s" % (num_bits, str(value)*num_bits)

def delay(value, counter=None):
    print("#%d" % (value / 50))
    if counter is not None:
        for i in range(NUM_LH_SENSORS):
            print("system.lh_sensor_instance[%d].lh_sensor.counter = %d;" % (i, counter))

def pulse_width(axis, data, skip):
    return 3200 + (500 if axis else 0) + (1000 if data else 0) + (2000 if skip else 0)

def pulse(value, total, comment=None):
    remainder = total-value
    if (comment is not None):
        print("lh_sensor = %s; // %s" % (bits(NUM_LH_SENSORS, 0), comment))
    else:
        print("lh_sensor = %s;" % (bits(NUM_LH_SENSORS, 0)))
    delay(value)
    print("lh_sensor = %s;" % bits(NUM_LH_SENSORS, 1))
    delay(remainder)

class Phase:
    def __init__(self, axis=0, skip=0):
        self.axis = axis
        self.skip = skip

phases = [
    (Phase(axis=0, skip=0), Phase(axis=0, skip=1)),
    (Phase(axis=1, skip=0), Phase(axis=1, skip=1)),
    (Phase(axis=0, skip=1), Phase(axis=0, skip=0)),
    (Phase(axis=1, skip=1), Phase(axis=1, skip=0))
]

data = [0x0000, 0xDEAD, 0xBEEF, 0xFACE, 0xCAFE, 0x0000]

def main():
    n = 0
    index = 0
    byte_value = data[index]
    for t in data:
        for i in range(17):
            print("$display(\"Sweep %d\");" % i) 
            if i == 16:
                d = 1
            else:
                d = 1 if (t & 0x8000) else 0
                t = (t << 1) & 0b1111111111111111
                print("//", format(t, '016b'), d)
            p = phases[n]
            pulse(pulse_width(axis=p[0].axis, data=d, skip=p[0].skip), 10000, "skip=%d, data=%d, axis=%d" % (p[0].skip, d, p[0].axis))
            pulse(pulse_width(axis=p[1].axis, data=d, skip=p[1].skip), 10000, "skip=%d, data=%d, axis=%d" % (p[1].skip, d, p[1].axis))
            delay(10000, 200000)
            pulse(1000, 2000)
            delay(10000)
            n += 1
            if (n > 3):
                n = 0

if __name__ == '__main__':
    main()

