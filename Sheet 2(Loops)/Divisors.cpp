#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    string divisors = "";
    cin >> N;
    for( int i = 1 ; i <= N; i++)
    {
       
            if( N % i == 0)
            {
                divisors += to_string(i) + "\n";
            }
    }
    cout << divisors << endl;
    return 0;
}