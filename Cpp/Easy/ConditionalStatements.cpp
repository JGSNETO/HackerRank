/*
- #include <bits/stdc++.h> is a non/standard header that includes almost every standard C++ library with a single line. 
- It includes:

#include <iostream>: Standard input and output streams. e.g: cin, cout, cerr, clog.
#include <iomanip>: Stream formatting. e.g: fixed, setprecision, setw, setfill.  
#include <string>: String manipulation. e.g: string, getline, substr.
#include <vector>: Dynamic arrays. e.g: vector, push_back, pop_back.
#include <array>: Fixed size arrays. e.g: array<int, N>.
#include <deque>: Double-ended queue. e.g: deque, push_front, push_back. 
#include <list>: Doubly linked list. e.g: list. 
#include <forward_list>: Singly linked list. e.g: foward_list. 
#include <stack>: Stack container. e.g: stack, push, pop, top.
#include <queue>: Queue containers. e.g: queue, priority_queue.
#include <set>: Ordered unique container. e.g: set, multiset. 
#include <unordered_set>: Hash set. e.g: unordered_set.
#include <map>: Ordered key-value container. e.g:map, multimap. 
#include <unordered_map>: Hash map. e.g: unordered_map. 
#include <algorithm>: Generic algorithms. e.g: sort, find, reverse, max, min. 
#include <numeric>: Numeric algorithms. e.g:accumulate, gcd, lcm. 
#include <functional>: Function objects. e.g: function, greater, less, lambdas. 
#include <utility>: Utility classes. e.g: pair, make_pair, swap.
#include <tuple>: Tuples. e.g:tuple, make_tuple, get. 
#include <bisets>: Bit manipulation. e.g: bitsets<32>.
#include <cmath>: Mathematical functions. e.g: sqrt, pow, sin, cos, log. 
#include <complex>: Complex numbers. e.g: complex<double>.
#include <limits>: Numeric limits. e.g: numeric_limits<int>::max(). 
#include <climits>: C integer limits. e.g: INT_MAX, LONG_MAX. 
#include <cfloat>: Floating-point limits. e.g: FLT_MAX, DBL_MAX. 
#include <cassert>: Assertions. e.g: assert().
#include <cstdlib>: General utilities. e.g: rand, srand, abs, exit. 
#include <cstdio>: C input/output. e.g: printf, scanf.
#include <cstring>: C string utilities. e.g: memcpy, memset, strcmp. 
#include <cctype>: Data and time. e.g time, clock. 
#include <chrono>: Modern time library. e.g steady_clock, duration. 
#include <random>: Random number generation. e.g: mt19937, uniform_int_distribution. 
#include <fstream>: File stream. e.g: ifstream, ofstream, fstream. 
#include <sstream>: String stream. e.g: stringstream, isstringstream. 
#include <iterator>: Iterators. e.g: begin(), end().
#include <exception>: Exception handling. e.g: exception, runtime_error. 
#include <stdexcept>: Standard exceptions. e.g: invalid_argument, out_of_argument. 
#include <typeinfo>: Runtime type information. e.g: typeid. 
#include <type_traits>: Compile-time type traits. e.g: is_same, enable_if.
#include <memory>: Smart pointers. e.g: unique_ptr, shared_ptr. 
#include <initializer_list>: Initializer list. e.g: {1, 2, 3}, initialization. 
#include <regex>: Regular expressions. e.g: regex, regex_match(). 
#include <locale>: Localization. e.g: locale, toupper.
#include <thread>: Multithreading. e.g: thread, this_thread. 
#include <mutex>: Thread synchronization. e.g: mutex, lock_guard. 
#include <future>: Asynchronous programming. e.g: future, async, promise. 
#include <condition_variable>: Thread coordination. e.g: condition_variable. 


Although bits/stdc++.h makes all of these available, you'll most frequently use these 10–15 headers:

<iostream>
<vector>
<algorithm>
<string>
<map>
<unordered_map>
<set>
<queue>
<stack>
<cmath>
<iomanip>
<numeric>
<utility>
<limits>
<functional>

#include <bits/stdc++.h> is not common in production software because it sacrifices portability, maintainability, and build efficiency for convenience.
1. It is not part of the C++ standard
The biggest reason.
bits/stdc++.h is a GCC-specific header. It works with GCC:
*/
/* 
if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &str);
string rtrim(const string &str); // Pass by reference: Give the function the access to the original. 
void numberToName(int a){
    
    if (a==1){
        cout << "one";
    } else if(a==2){
        cout << "two";
    } else if(a==3){
        cout << "three";
    } else if(a==4){
        cout << "four";
    } else if(a==5){
        cout << "five";
    } else if(a==6){
        cout << "six";
    } else if(a==7){
        cout << "seven";
    } else if(a==8){
        cout << "eight";
    } else if(a==9) {
        cout << "nine";
    } else {
        cout << "Greater than 9";
    }
}
int main() {

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    numberToName(n);
    
    return 0;
}

string ltrim(const string &str) {

    string s(str);
    /*
    string.erase(iterator first, iterator last): Remove everything from first up to last.
    s.begin(): returns an iterator pointing to the first character
    find_if(): find_if(s.begin(), s.end(), condition). Is a function from the <algorithm> library. It searches through a range and returns an iterator pointing to the first element that satisfies the condition.
    isspace(): comes from <cctype>. It checks whether a character is whitespace
    ptr_fun<int, int>(isspace): This part is old C++ syntax. Converts the C function isspace() into a function object that find_if() can use. Basically: isspace becomes something like: function<int(int)>. 
    not1(): reverses the result
    */
   // Find the first non-whitespace character.
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {

    string s(str):
    // This code is the right-trim (rtrim) version of the previous ltrim code. It removes whitespace from the end (right side) of a string.
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end()
    );

    return s;
}