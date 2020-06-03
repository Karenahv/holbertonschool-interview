#!/usr/bin/env python3
"""Write a script that reads stdin line by line and computes metrics"""

import sys

total_size = 0
status = ['200', '301', '400', '401', '403', '404', '405', '500']
times_status = [0, 0, 0, 0, 0, 0, 0, 0]
count = 0
try:
    for line in sys.stdin:
        line_list = line.split(" ")
        if len(line_list) > 2:
            size = line_list[-1]
            code = line_list[-2]
            if code in status:
                i = status.index(code)
                times_status[i] += 1
            total_size += int(size)
            count = count + 1
        if count == 10:
            print("File size: {:d}".format(total_size))
            for i in range(8):
                if times_status[i] != 0:
                    print("{:}: {:d}".format(status[i], times_status[i]))
            count = 0
except Exception:
    pass
finally:
    print("File size: {:d}".format(total_size))
    for i in range(8):
        if times_status[i] != 0:
            print("{:}: {:d}".format(status[i], times_status[i]))
