# Program Name : Python If-Else
# Link         : https://www.hackerrank.com/challenges/py-if-else
# Author Name  : Sayantan Pandit
# Date         : 25-05-2016 

#!/bin/python

import sys
N = int(raw_input().strip())

if N%2 == 0:
    if N>=2 and N<=5:
        print "Not Weird"
    elif N>=6 and N<=20:
        print "Weird"
    elif N>20:
        print "Not Weird"
else:
    print "Weird"
