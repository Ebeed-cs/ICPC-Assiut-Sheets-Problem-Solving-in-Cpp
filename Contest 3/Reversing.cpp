#include <iostream>
using namespace std;

int main()
{
 int N;
 cin >> N;
 int A[N];
 int input , i , j;
 i = j = 0;
 while( N --)
 {
   cin >> input;
   if( input == 0)
   {
      int swap , low = 0 , high = i - 1;
      while( low < high)
      {
        swap = A[low];
        A[low] = A[high];
        A[high] = swap;
        low++ ; high--;
      }
   }
   A[i++] = input;
 }
 N = i;
 i = 0;
 while( N--)
 {
  cout << A[i++] << " ";
 }
 return 0;
}
