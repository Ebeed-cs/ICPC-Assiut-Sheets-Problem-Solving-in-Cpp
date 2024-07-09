#include <iostream>
using namespace std;

int main() {
int A , B;
cin >> A >> B;
string result = (A % B == 0)? "Multiples" : (B % A == 0)? "Multiples" : "No Multiples";
cout << result  << endl;
}