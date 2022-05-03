# Input ex: 5
# output ex: 12345

from __future__ import print_function

def NumberDowntoOne(n):
    ref = 0
    refstr = ""
    while ref !=n:
        ref += 1 
        refstr= refstr + str(ref)
    return refstr
if __name__ == '__main__':
    n = int(raw_input())
    
    number = NumberDowntoOne(n)
    print(number)

ListOfNumbersOut.append("+91 " + number[1:(len(number)/2)+1] + " " + number[(len(number)/2)+1 : len(number))]
        