#include <iostream>
#include <math.h>
using namespace std;

 // we can count the number of digits with built in function 
int main()
{
    int N , A , B , count , sum_in , sum_out = 0; 
    string digits;
    cin >> N >> A >> B;
    for( int i = 1 ; i <= N ; i++)
    {
        digits = to_string(i);
        count = size(digits);
        sum_in = 0;
        while(count)
        {
            sum_in += digits[--count] - '0';
        }
        if ( sum_in <= B && sum_in >= A )
            sum_out += i;
    }
    cout << sum_out << endl;
    return 0;
}