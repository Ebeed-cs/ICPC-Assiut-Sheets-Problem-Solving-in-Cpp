#include <iostream>
using namespace std;

int main() 
{
 int N , i = 0 , pos[2] , input, max = INT_MIN , min = INT_MAX;
 cin >>N;
 int A[N];
 while(N--)
 {
    cin >> input;
    if(input > max)
    {
        max = input;
        pos[0] = i;
    }
    if(input < min)
    {
        min = input;
        pos[1] = i;
    }
    A[i++] = input;
 }
 N = i;
 i = 0;
 A[pos[0]] = A[pos[0]] + A[pos[1]];     // swap with only two variables
 A[pos[1]] = A[pos[0]] - A[pos[1]];     // a = a + b;
 A[pos[0]] = A[pos[0]] - A[pos[1]];     // b = a - b;
 while( N--)                            // a = a - b;
    cout << A[i++] << " ";

 return 0;
}
