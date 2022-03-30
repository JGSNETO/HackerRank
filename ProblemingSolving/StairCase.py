"""
Staircase detail

This is a staircase of size :

   #
  ##
 ###
####
Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Function Description

Complete the staircase function in the editor below.

staircase has the following parameter(s):

int n: an integer
Print

Print a staircase as described above.

Input Format

A single integer, , denoting the size of the staircase.

Constraints

 .

Output Format

Print a staircase of size  using # symbols and spaces.

Note: The last line must have  spaces in it.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .

Language
Pypy 2

More
891011121314151617181920212223242526272829
    while counter  <  n:
        i += 1
        print(esp*(n-i) + "#"*(counter+1))
        counter += 1
if __name__ == '__main__':
    n = int(raw_input().strip())

    staircase(n)

Line: 24 Col: 21

Submit Code

Run Code

Upload Code as File

Test against custom input
Problem Solving
You have earned 10.00 points!
You are now 39 points away from the 2nd star for your problem solving badge.
44%61/100
Congratulations
Share on FacebookShare on TwitterShare on LinkedIn
You solved this challenge. Would you like to challenge your friends?
Next Challenge
Earn a certificate in Problem Solving
Kudos on your progress! Take the HackerRank Skills Certification test and enrich your profile

Get Certified

Test case 0

Test case 1

Test case 2

Test case 3

Test case 4

Test case 5

Test case 6

Test case 7

Test case 8
Compiler Message
Success
Hidden Test Case
Unlock this testcase for 5 hackos.

Unlock

"""
#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'staircase' function below.
#
# The function accepts INTEGER n as parameter.
#

def staircase(n):
    # Write your code here
    counter, i = 0, 0
    esp = ' '
    hastag = '#'
    
    while counter  <  n:
        i += 1
        print(esp*(n-i) + "#"*(counter+1))
        counter += 1
if __name__ == '__main__':
    n = int(raw_input().strip())

    staircase(n)

