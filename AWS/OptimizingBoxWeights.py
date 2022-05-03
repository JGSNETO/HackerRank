from tracemalloc import stop
from numpy import array

arr: array =[5,2,2,3,1,4]
arrNew: array = []
BoxA: array = []


def OptimizingBox(arr:array):

    arr.sort(reverse = True)
    bTest = False
    bGreater = False
    SumA = 0
    SumB = 0
    while bGreater == False:
        for item in arr:
            SumB += item
        
        for item in arr:
           # if bTest == False:
            arrNew.append(item)
            for number in arrNew:
                SumA+=number
            if SumA > SumB - SumA:
                #bTest = True
                return arrNew
            else:
                pass

    return arrNew

if __name__ == "__main__":
    BoxA = OptimizingBox(arr)
    print(BoxA)
