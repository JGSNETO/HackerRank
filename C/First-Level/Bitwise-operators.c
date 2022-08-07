#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
int andOp=0,orOp=0,xorOp=0, andMax=0, orMax=0, xorMax=0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            andOp = i&j;
            orOp  = i|j;
            xorOp = i^j;
            if(andOp > andMax && andOp < k){andMax = andOp;}
            if(orOp > orMax && orOp < k){orMax = orOp;}
            if(xorOp > xorMax && xorOp < k){xorMax = xorOp;}
        }
    }
    
printf("%d\n%d\n%d\n", andMax, orMax, xorMax);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
