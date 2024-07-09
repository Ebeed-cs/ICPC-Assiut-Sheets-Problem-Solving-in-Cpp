#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long N;
    int ones_count,ones_many , T;
    cin >> T;
    while(T--)
    {
        ones_count = ones_many = 0;
        cin >> N;
        while(N)
            {
                ones_many += (N % 2)? 1 : 0;
                N /= 2;
            }
        while(ones_many--)
            {
                ones_count += pow(2 , ones_many);
            }
        cout << ones_count << endl;
    }
    return 0;
}