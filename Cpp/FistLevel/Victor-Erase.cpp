#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int position;
    int arrSize, number, index, start, end;
    vector<int> arr;
    cin >> arrSize;
    for(int i = 0; i<arrSize; i++){
        cin >> number;
        arr.push_back(number);
    }
    cin>>index;
    index = index -1;
    arr.erase(arr.begin()+index);
    cin>>start>>end;
    start = start - 1;
    end = end - 1;
    arr.erase(arr.begin()+start, arr.begin()+end);
    cout<<arr.size()<<endl;
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}
