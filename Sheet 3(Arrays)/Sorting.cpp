#include <iostream>
using namespace std;


int main() 
{
    int N, input , i = 0 , smaller = 100 , pos;
    cin >> N;
    int A[N];
    while(N--)
    {
        cin >> input;
        A[i++] = input;  
    }
    N = i;
    for( i = 0 ; i < N - 1; i++)
    {
        smaller = A[i];
        pos = i;
        for( int j = i + 1 ; j < N ; j++)
        {
                if( smaller > A[j])
            {
                smaller = A[j];
                pos = j;
            }
        }   
        A[pos] = A[i];
        A[i] = smaller;
    }
    i = 0;
    while(N--)
    {
        cout << A[i++] << " ";    
    }
    return 0;
}
