// Aim: Insert string in middle of another string
// Algorithm: Find mid position, use insert() function
// Result: Enter: Hello + XY → HeXYllo

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, ins;
    cout << "Enter main string: ";
    cin >> s;
    cout << "Enter string to insert: ";
    cin >> ins;
    int mid = s.length()/2;
    s.insert(mid, ins);
    cout << "Result: " << s;
    return 0;
}
