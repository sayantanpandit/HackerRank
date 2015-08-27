#!/usr/bin/env python
t = input()

while(t > 0):
  x = raw_input()
  x = x.split()
  a = long(x[0])
  b = long(x[1])
  res = a
  for i in range(a+1, b):
    res = res & i  
  print res
  t=t-1  
