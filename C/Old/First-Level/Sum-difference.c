// The fundamental data types in c are int, float and char. 
// Today, we're discussing int and float data types.
// The printf() function prints the given statement to the console. 
// The syntax is printf("format string",argument_list);.
// In the function, if we are using an integer, character, string or float as argument, 
// then in the format string we have to write %d (integer), %c (character), %s (string), %f (float) respectively.
// The scanf() function reads the input data from the console. 
// The syntax is scanf("format string",argument_list);. 
// For ex: The scanf("%d",&number) statement reads integer number from the console and stores
// the given value in variable .
// To input two integers separated by a space on a single line, the command is scanf("%d %d", &n, &m), where  and  are the two integers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int var1, var2, sumInt, subInt;
    float var3, var4, sumFloat, subFloat;
    scanf("%d %d", &var1, &var2);
    scanf("%f %f", &var3, &var4);
    
    sumInt=var1 + var2;
    subInt=var1 - var2;
    sumFloat=var3 + var4;
    subFloat=var3 - var4;
    
    printf("%d %d\n", sumInt, subInt);
    printf("%.1f %.1f\n",sumFloat, subFloat);

    return 0;
}