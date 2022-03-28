if __name__ == "__main__":

    w, h = 5, 5
    Matrix = [[0 for x in range(w)] for y in range(h)] 
    #print(f'matrix of dimension {w} x {h} is {Matrix}')
    i = 0 
    rl, lr = 0, 0
    wcorr = w-1
    while i < w:
       
        rl = Matrix[i][i] + rl
        lr = Matrix[i][wcorr-i] + lr
        i = i+1
    
    print(rl-lr)



    


