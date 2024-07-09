#include <iostream>
#include <math.h>
using namespace std;

 
int main()
{
    int T , A , B , sum;
    cin >> T;
    while(T--)
    {
        cin >> A >> B;
        sum = A;
        A = ( sum <= B)? sum : B;
        B = ( sum > B)? sum : B;
        A +=1;
        if ( A % 2 == 0)
            A +=1;
        sum = 0;
        while( A < B )
        {
            sum += A;
            A+=2;
        }
        cout << sum << endl;
    }
    return 0;
}