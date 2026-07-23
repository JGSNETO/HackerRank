/*~
1. Objective

In this challenge, we will learn some basic concepts of C that will get you started with the language. You will need to use the same syntax to read input and write output in many C challenges. 
As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.

2. Task

This challenge requires you to print" Hello, World" on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.

The required output is:

Hello, World!  
Life is beautiful  

3. Function Descriptio

Complete the main() function below.

The main() function has the following input:

string s: a string

Prints

*two strings: * "Hello, World!" on one line and the input string on the next line.

Input Format

There is one line of text, s .
*/

#include <stdio.h> // Standard Input/Output: printf(), scanf()
#include <string.h> // String manipulation: malloc(), free(), exit()
#include <math.h> // Mathematical functions: sqrt(), pow(), sin()
#include <stdlib.h> // General utilities: malloc(), free(), exit()

int main()
 
{
    char s[100];
    // Read input from STDIN
    scanf("%[^\n]%*c", &s); // reads formatted input from the keyboard.
    //Read every character except newline (\n)
    //Read one character but discard it. H e l l o   W o r l d \n <- Discarded
    //Print output from STDOUT
    printf("Hello, World!\n");
    //Print the input string
    printf("%s\n", s);

    return 0;

}