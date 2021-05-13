import os 
import time


def runSort(s,f):
	timestamp1 = int(time.time()*1000.0)
	print(timestamp1)
	time.sleep(3)
	command = "./"+s+".o "+str(f)
	print(command)
	timestamp2 = int(time.time()*1000.0)
	print(timestamp2)
	print(str(timestamp2-timestamp1)+str(" ms "))


def main():
	# Command to execute
	# Using Windows OS command
	isort= "insert"
	ssort = "selection"
	csort = "csort"
	runSort(isort,3000)

	
if __name__ = __main__:
	main()

	
