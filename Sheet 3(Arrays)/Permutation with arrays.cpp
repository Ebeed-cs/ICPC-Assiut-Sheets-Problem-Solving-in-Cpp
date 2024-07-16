#include <iostream>
using namespace std;

int main() 
{
 int N , i , size , input , sum1 , sum2;
 sum1 = sum2 = i = 0;
 bool permutation = true;
 cin >> size;
 N = size;
 int A[N];
 while(N--)
 {
    cin >> A[i];
    sum1 += A[i++]; // if element repeated in A[N] and not in B[N]
 }
 N = i;
 while( N-- )
 {
    cin >> input;
    sum2 += input;
    while(i--)
    {
        if(A[i] == input)
            break;
    }
    if ( ! ++i )
    {
        permutation = false;
        break;
    }
    i = size;
 }
 if (permutation && sum1 == sum2)
    cout << "yes" << endl;
 else 
    cout << "no" << endl;
}
