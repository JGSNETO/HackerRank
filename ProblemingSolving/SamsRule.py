from tokenize import Number
from numpy import array


def SamsRule(number: int):
    NumberDiv: int = 0
    Find: bool = False
    i: int = 1
    if number < 38:
        return number
    else:
        while i < 3:
            #print(i)
            NumberDiv = number + i
            #print(f'NumberDivOrig{NumberDiv}')
            if NumberDiv%5 == 0:
                #print("Numberdiv")
                Find = True
                #return NumberDiv
            i = i + 1

        if Find == True:
            return NumberDiv
        else:
            return number

            
            
if __name__ == "__main__":

    print(SamsRule(23))