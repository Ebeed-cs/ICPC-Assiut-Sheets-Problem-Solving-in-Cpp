#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int T , N;
    cin >> T;
    while( T--)
    {
        cin >> N;
        do
        {
          cout << N % 10 << " ";
        } while (N/= 10);
        cout << endl;
    }
    return 0;
}