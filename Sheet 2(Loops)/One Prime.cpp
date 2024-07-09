#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string isPrime = "YES";
    for(int i = 2 ; i <= sqrt(N) ; i++)
    {
        if( N % i == 0)
        {
            isPrime = "NO";
            break;
        }
    }
    cout << isPrime  << endl;
    return 0;
}
