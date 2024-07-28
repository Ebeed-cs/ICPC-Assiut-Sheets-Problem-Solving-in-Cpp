#include <iostream>
using namespace std;

int main()
{
 int N , Q , i , j;
 cin >> N >> Q;
 i = 0;
 long long A[N] , input;
 while(N--)
 {
   if ( i == 0)
   {
      cin >> A[i++];
      continue;
   }
   cin >> input;
   A[i] = input + A[i-1];
   i++;
 }
 while(Q--)
 {
   cin >> i >> j;
   i --; j --;
   N = A[i];
   if (i != 0)
    N -= A[i-1];
   input = A[j] - A[i] + N;
   cout << input << endl;
 }
 return 0;
}
