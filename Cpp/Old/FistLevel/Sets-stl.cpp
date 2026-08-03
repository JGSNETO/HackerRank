#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int queries;
    cin >> queries;
    set<int>s;
    for(int i=0; i<queries; i++){
        int option;
        int number;
        cin>>option;
        
        if(option == 1){
            cin >> number;
            s.insert(number);
        }
        else if(option == 2){
            cin >> number;
            set<int>::iterator itr=s.find(number);
            if(itr != s.end()){
                s.erase(number);
            }
        }
        else{
            cin>>number;
            set<int>::iterator itr=s.find(number);
            if(itr != s.end()){
                cout << "Yes\n";
            }else {
                cout << "No\n";
            }
        }
    } 
    return 0;
}



