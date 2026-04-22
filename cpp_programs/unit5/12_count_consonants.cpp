// Aim: Count consonants in string
// Algorithm: Check each letter, skip vowels, count rest
// Result: Enter: Hello → Consonants = 3

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int count=0;
    cout << "Enter string: ";
    cin >> s;
    for(int i=0;i<s.length();i++) {
        char c = tolower(s[i]);
        if(isalpha(c) && c!='a' && c!='e' &&
           c!='i' && c!='o' && c!='u')
            count++;
    }
    cout << "Consonants = " << count;
    return 0;
}
