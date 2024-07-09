#include <iostream>
using namespace std;

/* 
    not illegal code 
*/
int main() 
{
    int N , smaller, position , input , i;
    i = position = 0;
    smaller = 100000;
    cin >> N;
    while(N--)
    {
        i ++;
        cin >> input;
        if( input < smaller)
        {
            smaller = input;
            position = i;
        }
    }
    cout << smaller << " " << position << endl;
return 0;
}
