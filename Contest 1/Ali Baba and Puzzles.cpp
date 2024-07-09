#include <iostream>
using namespace std;

void AliBabaAndPuzzles( long long a , long long b , long long c , long long d)
{
         if ((a * b + c) == d) cout << "YES" << endl;
    else if ((a * b - c) == d) cout << "YES" << endl;
    else if ((a + b * c) == d) cout << "YES" << endl;
    else if ((a + b - c) == d) cout << "YES" << endl;
    else if ((a - b * c) == d) cout << "YES" << endl;
    else if ((a - b + c) == d) cout << "YES" << endl;
    else                       cout << "NO"  << endl;
}
int main() 
{
    int a , b , c;
    long long d;
    cin >> a >> b >> c >> d;
    AliBabaAndPuzzles( a ,b , c , d);
    return 0;
}