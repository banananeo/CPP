// Aim: Count uppercase and lowercase letters
// Algorithm: Check each char with isupper/islower
// Result: Enter: HeLLo → Uppercase=3 Lowercase=2

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int up=0, low=0;
    cout << "Enter string: ";
    cin >> s;
    for(int i=0;i<s.length();i++) {
        if(isupper(s[i])) up++;
        else if(islower(s[i])) low++;
    }
    cout << "Uppercase = " << up;
    cout << "\nLowercase = " << low;
    return 0;
}
