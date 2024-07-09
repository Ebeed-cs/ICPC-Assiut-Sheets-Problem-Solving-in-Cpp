#include <iostream>
using namespace std;


int main() {
    char input;
    cin >> input;
    if( input == 'z')
        cout << 'a';
    else    
        cout << char(input + 1);
}
