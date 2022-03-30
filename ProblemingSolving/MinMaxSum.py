"""
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example

The minimum sum is  and the maximum sum is . The function prints

16 24
Function Description

Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):

arr: an array of  integers
Print

Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.

Input Format

A single line of five space-separated integers.

Constraints



"""
#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    SumTotal, SumParcial = 0, 0 
    ArrPosition = 0
    CurrentMax, AbsMax = 0, 0
    CurrentMin = 1000
    Resp = " "
    for number in arr:
        SumTotal += number
        
    for item in arr:
        SumParcial = SumTotal - item
         
        if SumParcial >= CurrentMax:
            CurrentMax = SumParcial
         
        if ArrPosition == 0:
            CurrentMin = CurrentMax
        if SumParcial <= CurrentMin:
            CurrentMin = SumParcial
        
        ArrPosition += 1
        Resp = str(CurrentMin) + " " + str(CurrentMax) 
    print(Resp) 
        
if __name__ == '__main__':

    arr = map(int, raw_input().rstrip().split())

    miniMaxSum(arr)
