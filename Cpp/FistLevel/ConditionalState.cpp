/**
 * @file ConditionalState.cpp
 * @author José Gomes
 * @brief Conditonal state
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

if: This executes the body of bracketed code starting with  if  evaluates to true.

if (condition) {
    statement1;
    ...
}
if - else: This executes the body of bracketed code starting with  if  evaluates to true, or it executes the body of code starting with  if  evaluates to false. Note that only one of the bracketed code sections will ever be executed.

if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
if - else if - else: In this structure, dependent statements are chained together and the  for each statement is only checked if all prior conditions in the chain evaluated to false. Once a  evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each  in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}
Given a positive integer , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

A single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

Sample Input 0

5
Sample Output 0

five
Explanation 0

five is the English word for the number .

Sample Input 1

8
Sample Output 1

eight
Explanation 1

eight is the English word for the number .

Sample Input 2

44
Sample Output 2

Greater than 9
Explanation 2

 n = 44 is greater than 9, so we print Greater than 9.
 */

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    map < int, string> map1= {{1, "one"}, {2, "two"}, {3, "three"}, {4,"four"}, { 5, "five"}, {6, "six"}, { 7, "seven"}, { 8, "eight"}, {9, "nine"}};
    
    // Write your code here
    for (int i=0; i <= map1.size(); ++i){
        if (n > 9){
             cout << "Greater than 9 \n"; 
            break;
        }            
        if(n == i){
            //cout << n << "\n";
            cout << map1[i] << "\n";    
        }
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
