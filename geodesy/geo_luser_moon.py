#!/usr/bin/python

import de405
from jplephem import Ephemeris

eph = Ephemeris(de405);

start_day = 2447893
end_day = 2457389

for d in range(start_day,end_day):
    print eph.position_and_velocity('earthmoon',d)


