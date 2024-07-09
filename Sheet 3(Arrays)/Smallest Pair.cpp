#include <iostream>
using namespace std;


int main() 
{
    int T , N, input , i;
    cin >> T;
    while( T--)
    {   
        i = 0;
        cin >> N;
        int A[N];
        while(N--)
        {
            cin >> input;
            A[i++] = input;
        }
        N = i;
        input = INT_MAX;
        for( i = 1 ; i < N ; i++)
        {
            for ( int j = i+1 ; j <= N ; j++)
            {
                if ( input > (A[i-1] + A[j-1] + j - i))
                    input = (A[i-1] + A[j-1] + j - i);
            }
        }
        cout << input << endl;
    }
    return 0;
}
