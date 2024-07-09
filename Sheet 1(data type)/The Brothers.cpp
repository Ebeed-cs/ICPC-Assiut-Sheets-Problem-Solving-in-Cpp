#include <iostream>
using namespace std;

int main() {
string f1 , s1 , f2 , s2;
cin >> f1 >> s1;
cin >> f2 >> s2;
string result = ( s1 == s2)? "ARE Brothers" : "NOT";
cout << result << endl;
}