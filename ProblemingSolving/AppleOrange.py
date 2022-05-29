#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countApplesAndOranges' function below.
#
# The function accepts following parameters:
#  1. INTEGER s
#  2. INTEGER t
#  3. INTEGER a
#  4. INTEGER b
#  5. INTEGER_ARRAY apples
#  6. INTEGER_ARRAY oranges
#

def countApplesAndOranges(s, t, a, b, apples, oranges):
    # Write your code here
    counter_apple, counter_orange = 0, 0
    dist_apple, dist_orange = 0, 0
    
    for apple in apples:
        #print(apple)
        dist_apple = apple + a
        if s <= dist_apple <= t:
            counter_apple +=1
        else:
            pass
    
    for orange in oranges:
        #print(f'Orange {orange}')
        dist_orange = orange + b
        if s <= dist_orange <= t:
            counter_orange +=1
        else:
            pass
    print(counter_apple)
    print(counter_orange)  
    #return [counter_apple, counter_orange] 
if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    s = int(first_multiple_input[0])

    t = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    a = int(second_multiple_input[0])

    b = int(second_multiple_input[1])

    third_multiple_input = input().rstrip().split()

    m = int(third_multiple_input[0])

    n = int(third_multiple_input[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
 