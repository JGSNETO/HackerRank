#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    string aNew, bNew;
    
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a << b << endl;
    
    aNew = b[0];
    bNew = a[0];
    //cout << aNew << endl;
    for (int i = 1; i<a.size(); i++){
        aNew = aNew + a[i];
    }
    for (int i = 1; i<b.size(); i++){
        bNew = bNew + b[i];
    }
    
    cout << aNew << " " << bNew << endl;
    return 0;
}