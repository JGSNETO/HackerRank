#include <cmath>
#include <cstdio>
#include <vector>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q,tmp,grade;
    cin >> Q; 
    map<string,int> student;
    string name;
    
    for(int i=0;i<Q;i++){
        cin >> tmp;
        if(tmp == 1){
            //cout<< "Case 01\n";
            cin>> name >> grade;
            student[name] += grade;   
        }
        else if(tmp == 2){
            //cout<< "Case 02\n";
            cin >> name;
            student.erase(name);
        }
        else{
            //cout<<"Case 03\n";
            cin >> name;
            map<string,int>::iterator itr=student.find(name);
            if (itr != student.end()){
                cout<<student[name]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}



