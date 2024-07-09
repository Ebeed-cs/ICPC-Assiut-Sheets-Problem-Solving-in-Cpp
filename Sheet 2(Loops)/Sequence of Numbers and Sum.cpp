#include <iostream>
#include <math.h>
using namespace std;

 
int main()
{
    int A , B , sum;
    while(true)
    {
        cin >> A >> B;
        sum = A;
        A = ( sum <= B)? sum : B;
        B = ( sum > B)? sum : B;
        sum = 0;
        if ( A <= 0 || B <= 0)
            break;
        for ( A ; A <= B ; A++)
        {
            cout << A << " ";
            sum += A;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}