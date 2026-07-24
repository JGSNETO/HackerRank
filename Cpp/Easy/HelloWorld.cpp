/*

1. Objective
This is a simple challenge to help you practice printing to stdout. You may also want to complete Solve Me First in C++ before attempting this challenge.

We're starting out by printing the most famous computing phrase of all time! In the editor below, use either printf or cout to print the string  to stdout.

The more popular command form is cout. It has the following basic form:

cout<<value_to_print<<value_to_print;

Any number of values can be printed using one command as shown.

The printf command comes from C language. It accepts an optional format specification and a list of variables. Two examples for printing a string are:

printf("%s", string); printf(string);

Note that neither method adds a newline. It only prints what you tell it to.

2. Output Format

Print  to stdout.

Sample Output

Hello, World!

*/

#include <iostream> /*Includes the iostream library, which provides C++ Input/Output functionality. e.g: cout, cin, cerr*/
#include <cstdio> /*Includes the C standard input?output library. e.g: printf, scanf, fprintf, sprintf*/
using namespace std; /*Everything inside the C++ standard library belongs to the namespace std. 
Without this line:
std::cout << "Hello";

With this line:
cout << "Hello"
*/

int main() {

    printf("Hello, World!");
    return 0;
}