import os 
import time

timestamp1 = int(time.time()*1000.0)
print(timestamp1)
#time.sleep(1)
timestamp2 = int(time.time()*1000.0)
print(timestamp2)
print(str(timestamp2-timestamp1)+str(" ms "))

# Command to execute
# Using Windows OS command
isort10000 = "./insert.o 10000"
ssort10000 = "./selection.o 10000"
csort10000 = "./csort.o 10000"

isort20000 = "./insert.o 20000"
ssort20000 = "./selection.o 20000"
csort20000 = "./csort.o 20000"

isort30000 = "./insert.o 30000"
ssort30000 = "./selection.o 30000"
csort30000 = "./csort.o 30000"

isort50000 = "./insert.o 50000"
ssort50000 = "./selection.o 50000"
csort\50000 = "./csort.o 50000"

# insert sort
print("Insertion Sort")
timestamp1 = int(time.time()*1000.0)
os.system(isort50000)
#time.sleep(1)
timestamp2 = int(time.time()*1000.0)
isorttime = (timestamp2-timestamp1)/1000
print(str(timestamp2-timestamp1)+str(" ms "))
#time.sleep(4)

# selection sort
print("Selection Sort")
timestamp1 = int(time.time()*1000.0)
#time.sleep(1)
os.system(ssort50000)
timestamp2 = int(time.time()*1000.0)
ssorttime = (timestamp2-timestamp1)/1000
print(str(timestamp2-timestamp1)+str(" ms "))
#time.sleep(4)

# c sort
print("C Sort (Quick Sort")
timestamp1 = int(time.time()*1000.0)
#time.sleep(1)
os.system(csort50000)
timestamp2 = int(time.time()*1000.0)
csorttime = (timestamp2-timestamp1)/1000
print(str(timestamp2-timestamp1)+str(" ms "))

print(" * * * * * * * * ")
print("Insertion sort " + str(isorttime))
print("Selection sort " + str(ssorttime))
print("C sort         " + str(csorttime))

