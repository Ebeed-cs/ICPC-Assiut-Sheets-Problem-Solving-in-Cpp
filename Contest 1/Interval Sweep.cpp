#include <iostream>
using namespace std;


int main() 
{
    int a , b;
    cin >> a >> b;
    if ( a == 0 && b == 0)
        cout << "NO" << endl;
    else if( a == b+1 || a+1 == b || a == b)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}