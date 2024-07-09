#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int rows , count;
    cin >> rows;
    for ( int i = rows ; i >= 0 ; i--)
    {
        count = i;
        while(count--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}