"""
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Example

There are  elements, two positive, two negative and one zero. Their ratios are ,  and . Results are printed as:

0.400000
0.400000
0.200000
Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

int arr[n]: an array of integers
Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer, , the size of the array.
The second line contains  space-separated integers that describe .

Constraints



Output Format

Print the following  lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros
Sample Input

STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array.
The proportions of occurrence are positive: , negative:  and zeros: .

Language
Pypy 2

More
26272829303132333435363738394243444546474041
        if number == 0:
            NumNull += 1
    
    RatioPos = NumPos/NumTotal
    RatioNeg = NumNeg/NumTotal
    RatioNull = NumNull/NumTotal
    
    print("%.6f" %RatioPos)
    print("%.6f" %RatioNeg)
    print("%.6f" %RatioNull)

Line: 40 Col: 28

Submit Code

Run Code

Upload Code as File

Test against custom input
Wrong Answer :(

2/2 test cases failed


Sample Test case 0

Sample Test case 1
Compiler Message
Wrong Answer
Input (stdin)

Download
6
-4 3 -9 0 4 1
Your Output (stdout)
0.500000
Expected Output

Download
0.500000
0.333333
0.166667
Contest Calendar
"""

#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    NumPos = 0
    NumNeg = 0
    NumNull = 0
    NumTotal = 0.0 
    RatioPos = 0.0
    RatioNeg = 0.0
    RatioNull = 0.0
    
    for number in arr:
        NumTotal += 1
        if number > 0:
            NumPos += 1
        if number < 0:
            NumNeg += 1
        if number == 0:
            NumNull += 1
    
    RatioPos = NumPos/NumTotal
    RatioNeg = NumNeg/NumTotal
    RatioNull = NumNull/NumTotal
    
    print("%.6f" %RatioPos)
    print("%.6f" %RatioNeg)
    print("%.6f" %RatioNull)
    

if __name__ == '__main__':
    n = int(raw_input().strip())

    arr = map(int, raw_input().rstrip().split())

    plusMinus(arr)
