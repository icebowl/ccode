#!/usr/bin/python
import sys
import binascii

print (len(sys.argv))
print (str(sys.argv))
s = sys.argv[1]
n = len(s)
print(s,n)
print()
clean = []
for i in range(n):
 clean = hex(ord(s[i]))[2:4]
 print(clean,' ',end='')
print("\n",s, "CONCATENATED")
for i in range(n):
 clean = hex(ord(s[i]))[2:4]
 print(clean,end='')
print()
