#include <iostream>
using namespace std;

int main(){
    string text = "Lorem ipsum, dolor sit! amet, consectetur? adipiscing elit. Ut porttitor.";
 // input string
    string str = "Welcome???@@##$ to#$% Geeks%$^for$%^&Geeks";
 
    for (int i = 0, len = str.size(); i < len; i++)
    {
        // check whether parsing character is punctuation or not
        if (ispunct(str[i]))
        {
            str.erase(i--, 1);
            len = str.size();
        }
    }
     
    // print string without punctuation
    cout << str;
    return 0;
}
