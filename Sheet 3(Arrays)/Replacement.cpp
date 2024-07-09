#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int N, i , input;
    string out = "";
    cin >> N ;
    i = 0;
    int A[N];
    while( N--)
    {
        cin >> input;
        A[i++] = input;
    }
    N = i;
    i = 0;
    while( N-- )
    {
        if (A[i] > 0)
            A[i] = 1;
        else if (A[i] < 0)
            A[i] = 2;
        else
            A[i] = 0;

        out += to_string(A[i++]) + " ";
    }
    cout << out << endl;
    return 0;
}
