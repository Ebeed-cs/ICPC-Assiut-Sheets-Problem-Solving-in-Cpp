#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int rows , count;
    cin >> rows;
    for ( int i = 1 ; i <= rows ; i++)
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