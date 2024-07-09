#include <iostream>
using namespace std;


int main() 
{
    int N, i , summition;
    char input;
        i = 0;
        cin >> N;
        int A[N];
        while(N--)
        {
            cin >> input;
            A[i++] = input - '0';
        }
        N = i;
        i = summition = 0;
        while( N--)
        {
            summition += A[i++];
        }
        cout << summition << endl;
 return 0;
}
