#include <sstream>
#include <vector>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> strOut;
    int tmp;
    char comma;
    stringstream ss(str);
    
    while (ss >> tmp){
        strOut.push_back(tmp);
        ss >> comma;
    }
    return strOut; 
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}