#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int size , count;
    string S;
    cin >> S >> size;
    for ( int i = 0 ; i < size ; i++)
    {
        cin >> count;
        while(count--)
        {
            cout << S;
        }
        cout << endl;
    }
    return 0;
}