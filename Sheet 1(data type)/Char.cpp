#include <iostream>
using namespace std;

int main() {
char ascii;
cin >> ascii;
ascii = int(ascii);
if ( int('a') <= ascii && ascii  <= int('z') )
{
    ascii -= 32;  
    cout << char(ascii) << endl;
}
else if( int('A') <= ascii && ascii <= int('Z') )
{
    ascii += 32;
    cout << char(ascii) << endl;
}  
}