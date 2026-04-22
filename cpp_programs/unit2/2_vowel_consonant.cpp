// Aim: Check vowel or consonant
// Algorithm: Match character with a,e,i,o,u
// Result: Enter character: a → Vowel

#include<iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        cout << "Vowel";
    else
        cout << "Consonant";
    return 0;
}
