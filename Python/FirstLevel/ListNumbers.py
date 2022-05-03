def wrapper(f):
    def fun(l):
        # complete the function
        ListOfNumbersIn = l
        ListOfNumbersOut = [] 
        for number in ListOfNumbersIn:
            if number[0] == str(0):
                ListOfNumbersOut.append("+91 " + number[1:(len(number)/2)+1] + " " + number[(len(number)/2)+1 : len(number)])
            if number[0:2] == str(91) and len(number) == 12:
                ListOfNumbersOut.append("+" + number[0:2] + " " + number[2:7] + " " + number[7: len(number)]) 
            if len(number) == 10:
                ListOfNumbersOut.append("+91" + " " + number[0:len(number)/2] + " " + number[len(number)/2: len(number)])     
            #print(ListOfNumbersOut[0])
            #index += 1
        print(ListOfNumbersOut)
    return fun

# @wrapper
# def sort_phone(l):
#     print '\n'.join(sorted(l))

# if __name__ == '__main__':
#     l = [raw_input() for _ in range(int(input()))]
#     sort_phone(l) 