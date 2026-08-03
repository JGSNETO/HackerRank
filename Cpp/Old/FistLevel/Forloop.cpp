/**
 * @file Forloop.cpp
 * @author your name (you@domain.com)
 * @brief For Loop
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
 */

#include <iostream>
#include <cstdio>
#include <math.h>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    // Complete the code.
    map < int, string> map1= {{1, "one"}, 
                              {2, "two"},
                              {3, "three"}, 
                              {4,"four"}, 
                              {5, "five"}, 
                              {6, "six"}, 
                              {7, "seven"}, 
                              {8, "eight"}, 
                              {9, "nine"}};
    
    int a;
    int b;
    int i =0;
    int counter =0;
    cin >> a >> b;
    while (a <= b){
        //cout << a << " :a " << "\n";
        if(a<=9){
            cout << map1[a] << "\n"; 
            ++i;
            
        }
        if (a > 9 ){
            if(a%2 == 0){
                cout << "even\n";
            }else{
                cout << "odd\n";
            }
        }
        //cout << "saiu while" << "\n";
        ++a;
    }
    return 0;
}
