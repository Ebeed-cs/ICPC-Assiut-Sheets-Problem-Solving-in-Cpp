#include <iostream>
using namespace std;

int main() 
{
    long long N;
    int T , max = 0 , count;
    cin >> T;
    while( T--)
    {
        count = 0;
        cin >> N;
        while( N % 2 == 0)
        {
            N /= 2;
            count += 1;
        }
        if(count > max)
            max = count ;
    }
    cout << max << endl;

    return 0;
}
