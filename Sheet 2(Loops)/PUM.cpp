#include <iostream>
#include <math.h>
using namespace std;

 
int main()
{
    int N , i=0;
    cin >> N;
    while(N--)
    {
        cout << ++i << " ";
        cout << ++i << " ";
        cout << ++i << " ";
        cout << "PUM" << endl;
        i++;

    }
    return 0;
}