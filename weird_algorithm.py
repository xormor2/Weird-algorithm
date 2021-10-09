#!/bin/python3
# copyright Lauri K. Friberg 2021

"""System module."""
import sys

def is_even(number):
    """Find out if number is even."""
    return (number%2)==0

def is_odd(number):
    """Find out if number is odd."""
    return (number%2)==1

weird_algorithm_number=int(input("Give an integer number (1 =< number =< 1000000): "))

print("(c) 2021 Lauri K. Friberg. Weird algorithm. Look at https://cses.fi/problemset/task/1068/")
print("View the source code, too: cat weird_algorithm.py")

if weird_algorithm_number<1:
    print ("Error: Give an integer equal to or bigger than 1.")
    sys.exit()
elif weird_algorithm_number>1000000:
    print ("Error: Give an integer equal to or smaller than 1000000.")
    sys.exit()

print (weird_algorithm_number, end=" ", flush=True)

while weird_algorithm_number!=1:
    if is_even(weird_algorithm_number):
        weird_algorithm_number=int(weird_algorithm_number/2)
        print (weird_algorithm_number, end=" ", flush=True)
    elif is_odd(weird_algorithm_number):
        weird_algorithm_number=int(weird_algorithm_number*3+1)
        print (weird_algorithm_number, end=" ", flush=True)
    else:
        print ("Error!")

print ("")
