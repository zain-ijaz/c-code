#include <iostream>
using namespace std;
//check if number or string
bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
      return true;
}
int main() {
   string str = "sunidhi";
   if (check_number(str))
      cout<<str<< " is an integer"<<endl;
   else
      cout<<str<< " is a string"<<endl;
      string str1 = "1234";
   if (check_number(str1))
      cout<<str1<< " is an integer";
   else
      cout<<str1<< " is a string";
}
