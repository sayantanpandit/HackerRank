#!/usr/bin/env python
x = raw_input()
x = x.split()

a = int(x[0])
b = int(x[1])
n = int(x[2])

for i in range(3, n+1):
   c = b**2 +a
   a = b
   b = c
   
print c
