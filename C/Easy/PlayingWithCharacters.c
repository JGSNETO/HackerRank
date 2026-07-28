/*Objective

This challenge will help you to learn how to take a character, a string and a sentence as input in C.

To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout
char ch;
scanf("%c", &ch);
printf("%c", ch);


This piece of code prints the character .

You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.

In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where  is the maximum size of . Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.

Task

You have to print the character,c , in the first line. Then print s in next line. In the last line print the sentence, sen.

Input Format

First, take a character, c  as input.
Then take the string, s as input.
Lastly, take the sentence sen as input.

Constraints

Strings for s  and  s will have fewer than 100 characters, including the newline.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {

    char c = ' ';
    char str[100] = "";
    char sen[100] = "";

    scanf("%c", &c);
    scanf("%s", &str);
    scanf(" %[^\n]%*c", &sen);

    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s", sen);  
    return 0;
}