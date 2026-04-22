// Aim: Check if character is upper or lowercase
// Algorithm: Use isupper() and islower() functions
// Result: Enter: A → Uppercase

#include<iostream>
#include<string>
using namespace std;
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if(isupper(c)) cout << "Uppercase";
    else if(islower(c)) cout << "Lowercase";
    else cout << "Not a letter";
    return 0;
}
