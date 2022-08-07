// A class template provides a specification for generating classes based on parameters. 
// Class templates are generally used to implement containers. A class template is instantiated 
// by passing a given set of types to it as template arguments. Here is an example of a class, 
// MyTemplate, that can store one element of any type and that has just one member function divideBy2, 
// which divides its value by 2.

// template <class T>
// class MyTemplate {
// T element;
// public:
// MyTemplate (T arg) {element=arg;}
// T divideBy2 () {return element/2;}
// };

// It is also possible to define a different implementation of a template for a specific type. 
// This is called Template Specialization. For the template given above, we find that a different
// implementation for type char will be more useful, so we write a function printElement to print the 
// char element:

// // class template specialization:
// template <>
// class MyTemplate <char> {
// char element;
// public:
// MyTemplate (char arg) {element=arg;}
// char printElement ()
// {
// return element;
// }
// };

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements{
    T element;
    public:
    AddElements (T arg) {element = arg;}
    T add(T x) { return x + element;}
};

template <>
class AddElements <string>{
    string element;
    public:
    AddElements (string arg) {element = arg;}
    string concatenate (string arg){
        string s = element + arg;
        return s;
    }
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
