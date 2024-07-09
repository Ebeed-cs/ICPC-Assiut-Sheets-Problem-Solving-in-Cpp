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
        A[N] = input;
        i++;
    }
    N = i;
    i = 0;
    while( N-- )
    {
        cout << A[i++] << " ";
    }
    return 0;
}
