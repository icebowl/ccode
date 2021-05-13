import os 
import time


def runSort(n,s,f):
	timestamp1 = int(time.time()*1000.0)
	#print(timestamp1)
	command = "./"+s+".o "+str(f)
	print(command)
	os.system(command)
	timestamp2 = int(time.time()*1000.0)
	#print(timestamp2)
	totalms = str(timestamp2-timestamp1)+str(" ms ")
	totalms = n + " "+str(f) +" "+ totalms 
	return totalms

def main():
	# Command to execute
	# Using Windows OS command
	isort= "insert"
	ssort = "selection"
	csort = "csort"
	isortms3 = runSort("Insertion Sort",isort,3000)
	ssortms3 = runSort("Selection Sort",ssort,3000)
	csortms3 = runSort("C Sort",csort,3000)
	isortms5 = runSort("Insertion Sort",isort,5000)
	ssortms5 = runSort("Selection Sort",ssort,5000)
	csortms5 = runSort("C Sort",csort,5000)
	isortms7 = runSort("Insertion Sort",isort,7000)
	ssortms7 = runSort("Selection Sort",ssort,7000)
	csortms7 = runSort("C Sort",csort,7000)
	os.system("clear")
	print("Sorting Data\n")
	print(isortms3);print("\n")
	print(ssortms3);print("\n")
	print(csortms3);print("\n")
	print(isortms5);print("\n")
	print(ssortms5);print("\n")
	print(csortms5);print("\n")
	print(isortms7);print("\n")
	print(ssortms7);print("\n")
	print(csortms7);print("\n")
	
main()

	
