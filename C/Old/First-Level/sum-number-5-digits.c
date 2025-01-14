#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum, tmp;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while ( n > 0){
        tmp = n % 10;
        sum += tmp;
        n = n/10;        
    }
    printf("%d", sum);
    return 0;
}
