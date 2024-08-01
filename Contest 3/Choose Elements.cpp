#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 int N , K;
 long long i = 0;
 cin >> N >> K;
 int A[N];
 while(N--)
 {
  cin >> A[i++];
 }
 N = i;
 i = 0;
sort(A , A + N);
while( K --)
{
  if(A[--N] > 0)
    i += A[N];
  else
    break; // to prevent adding the negative elements to the summation and decrement it 
}
cout << i << endl;
 return 0;
}
