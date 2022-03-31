s = "14:15:00PM"
checa = False
c = "P"
TimePeriod = " "
Hour = " 00 "
Min = " 00 "
Sec = " 00 "
FullHour = " 00:00:00"
def CheckTimePeriod(s):
    try:
        res = s.index(c)
        return "PM"
        #print ("Character {} in string {} is present at {}".format(c, s, str(res + 1)))
    except ValueError as e:
        return  "AM"
        #print ("No such character available in string {}".format(s))

TimePeriod = CheckTimePeriod(s)

def ConvertToMilitaryHour(TimePeriod):
    
    if TimePeriod == "PM":
        Hour = s[0] + s[1]
        Hour = int(Hour)

        if Hour < 12:
            Hour = 12 + Hour
        else:
            pass
        
        Hour = str(Hour)
        Min = s[3] + s[4]
        Sec = s[6] + s[7]

        FullHour = Hour + ":" + Min + ":" + Sec

    return FullHour


print(ConvertToMilitaryHour(TimePeriod))
"""
#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    
    checa = False
    c = "P"
    TimePeriod = " "
    Hour = " 00 "
    Min = " 00 "
    Sec = " 00 "
    FullHour = " 00:00:00"
    
    try:
        res = s.index(c)
        TimePeriod = "PM"
    except ValueError as e:
        TimePeriod = "AM"
          
    if TimePeriod == "PM":
        Hour = s[0] + s[1]
        Hour = int(Hour)

        if Hour < 12:
            Hour = 12 + Hour
            
    if TimePeriod == "AM":
        Hour = s[0] + s[1]
        if Hour == "12":
            Hour = "00"
            
        if Hour != "12":
            pass
            
        
    Hour = str(Hour)
    Min = s[3] + s[4]
    Sec = s[6] + s[7]

    FullHour = Hour + ":" + Min + ":" + Sec

    return FullHour
  
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()

"""



