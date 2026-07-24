/*
1. Objective
In this challenge, we practice reading input from stdin and printing output to stdout.
In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:
string s;
int n;

and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:
cin >> s >> n;
This reads the first word ("High") from stdin and saves it as string , then reads the second word ("") from stdin and saves it as integer . If we want to print these values to stdout, separated by a space, we write the following code:
cout << s << " " << n << endl;

2. Task
Read 3 numbers from stdin and print their sum to stdout.

Input Format

One line that contains  space-separated integers:a ,b , and c
*/

#include <iostream>
#include <cstdlib>
#include <cmath> /*Provides mathematical functions.Instead of writing your own implementations for square roots, powers, trigonometry, logarithms, etc., you use functions from <cmath>.*/
#include <vector> /*Provides the vector container. A vector is a dynamic array. Unlike a normal array, it can grow or shrink while the program is running.*/
#include <algorithm> /*Contains hundreds of optimized algorithms for working with containers. Instead of writing everything yourself, you simply call an algorithm.*/

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;
    cout << a + b + c << endl;
    return 0;
}