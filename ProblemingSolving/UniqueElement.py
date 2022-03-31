a = [1,2,2]

def TestMatch(arr, d):
    match = False
    counter = 0
    for item in arr:
        if d == item:
            counter += 1
            if counter > 1:
                match = True
    
    return match
        
def lonelyinteger(a):
    # Write your code here
    match = False
    unique = None
    for item in a:
        result = TestMatch(a, item)
        if result == False:
            unique = item
    
    return unique

print(lonelyinteger(a))
        