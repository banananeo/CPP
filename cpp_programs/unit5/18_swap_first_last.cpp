// Aim: Swap first and last character of string
// Algorithm: Store s[0] in temp, swap s[0] and s[last]
// Result: Enter: Hello → After swap: oellH

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    char temp = s[0];
    s[0] = s[s.length()-1];
    s[s.length()-1] = temp;
    cout << "After swap: " << s;
    return 0;
}
