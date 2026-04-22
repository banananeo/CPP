// Aim: Count occurrences of specific character
// Algorithm: Loop through string, count matching characters
// Result: Enter: Hello, char: l → l appears 2 times

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    char c;
    int count=0;
    cout << "Enter string: ";
    cin >> s;
    cout << "Enter character to count: ";
    cin >> c;
    for(int i=0;i<s.length();i++)
        if(s[i]==c) count++;
    cout << c << " appears " << count << " times";
    return 0;
}
