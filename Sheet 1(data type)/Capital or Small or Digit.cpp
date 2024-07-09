#include <iostream>
using namespace std;

int main() {
char ascii;
cin >> ascii;
ascii = int(ascii);
if ( int('a') <= ascii && ascii  <= int('z') )
    cout << "ALPHA\n" << "IS SMALL" << endl;
else if( int('A') <= ascii && ascii <= int('Z') )
    cout << "ALPHA\n" << "IS CAPITAL" << endl;
else
    cout << "IS DIGIT" << endl;

}