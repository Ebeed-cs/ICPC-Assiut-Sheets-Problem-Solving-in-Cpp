#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int N, i , input;
    cin >> N ;
    i = 0;
    int A[N];
    while( N--)
    {
        cin >> input;
        A[i++] = input;
    }
    cin >> input;
    N = i;
    i = 0;
    while( N-- )
    {
        if (A[i++] == input)
            break;
    }
    if ( N > 0)
        cout << i - 1 << endl;
    else 
        cout << -1 << endl;

    return 0;
}
