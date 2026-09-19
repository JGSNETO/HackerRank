/*
Objective:

In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. 
The logical operators, and C language, use 1 to represent true and 0 to represent false. The logical operators 
compare bits in two numbers and return true or false,  or , for each bit compared.

- Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

- Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

- Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
    int max_and=0, max_or=0, max_xor=0;
    for (int a = 1; a <= n; a++)
    {
        for(int b = a+1; b <= n; b++)
        {
            if(max_and <(a & b) && (a & b) <k) max_and = a & b;
            if(max_or <(a | b) && (a | b) <k) max_or = a | b;
            if(max_xor <(a ^ b) && (a ^ b) <k) max_xor = a ^ b;

        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
   
}


int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}