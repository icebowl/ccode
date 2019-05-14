#https://www.programiz.com/python-programming/methods/string/format#numbers

for n in range (1,26):
 c = chr(n+64)
 print(n,c,format(ord(c), "x"))

print(" * * *")
for n in range (1,26):
 c = chr(n+96)
 print(n,c,format(ord(c), "x"))
