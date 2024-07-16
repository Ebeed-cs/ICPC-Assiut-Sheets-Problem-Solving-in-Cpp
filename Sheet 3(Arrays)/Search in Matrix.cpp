#include <iostream>
using namespace std;

int main() 
{
 int N , M , x;
 cin >> N >> M;
 x = N * M;
 int A[x];
 while( x --)
 {
    cin >> A[x];
 }
 cin >> x;
 N = N * M;
 while( N --)
 {
    if ( x == A[N])
    {
        cout << "will not take number" << endl;
        break;
    }        
 }
 N++;
 if( ! N)
 {
    cout << "will take number" << endl;
 }
}
