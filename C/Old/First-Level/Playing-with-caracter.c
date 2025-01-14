// This challenge will help you to learn how to take a character, a string and a sentence as input in C.

// To take a single character  as input, you can use scanf("%c", &ch ); 
//and printf("%c", ch) writes a character specified by the argument char to stdout

// char ch;
// scanf("%c", &ch);
// printf("%c", ch);

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch, s[MAX_LEN], sen[MAX_LEN];
    
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n"); // The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.
    
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    
    return 0;
}