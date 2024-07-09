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
    N = i;
    i = 0;
    while( N-- )
    {
        if ( A[i] > 10)
        {
            i++;
            continue;
        } 
        cout << "A[" << i << "]" << " " << "=" << " " << A[i++] << endl; 
    }
    return 0;
}
