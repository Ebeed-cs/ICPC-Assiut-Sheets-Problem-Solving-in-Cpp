#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    string primeNums = "";
    bool isPrime = true; 
    cin >> N;
    for( int i = 2 ; i <= N; i++)
    {
        for ( int j = 2 ; j <= sqrt(i); j++)
        {
            if( i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            primeNums +=  to_string(i) + " ";
        }
        isPrime = true;
        

    }
    cout << primeNums << endl;
    return 0;
}
