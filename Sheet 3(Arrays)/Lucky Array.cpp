#include <iostream>
using namespace std;


int main() 
{
    int N, input , i ,smallest = INT_MAX;
        i = 0;
        cin >> N;
        int A[N];
        while(N--)
        {
            cin >> input;
            A[i++] = input;
            if( input < smallest)
                smallest = input;
        }
        N = i;
        i = input = 0;
        while( N--)
        {
            if ( A[i++] == smallest)
                input ++;
        }
        if ( input % 2 != 0)
            cout << "Lucky" << endl;
        else
            cout << "Unlucky" << endl;

    return 0;
}
