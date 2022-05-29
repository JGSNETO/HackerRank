from matplotlib.pyplot import hlines


if __name__  == "__main__":
    
    arr =[1,2,6,3,4,5]
    h =0
    l = 0
    hpos = 0
    lpos = 0
    i = 0
    for item in arr:
        if item > h:
            h = item
            hpos = i
        if item < l:
            l = item
            lpos = i
        i +=1
    
    print(len(arr))    
    print(hpos)
    print(lpos)
             