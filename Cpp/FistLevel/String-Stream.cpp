#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

int main(){

std::stringstream ss;
  ss.str ("E");
  std::string s = ss.str();
  std::cout << s << '\n';
  if(s == "E"){
      cout << "igual" << endl;
  }
  else{
      cout << "Different" << endl;
  }
  system("PAUSE");
  return 0;
}