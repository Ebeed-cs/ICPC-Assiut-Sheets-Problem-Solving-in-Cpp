#include <iostream>
#include <algorithm>
using namespace std;

int alternative_array ( int N , int arr[])
{
  N --;
  int count , input , i;
  count = i = 0;
  if( arr[0] > 0)
  while( N --)
  {
    i++;
    if( i % 2 != 0 && arr[i] > 0)
      count ++;
    else if ( i % 2 == 0 && arr[i] < 0)
      count ++;
  }
 else if( arr[0] < 0)
  while( N --)
  {
    i++;
    if( i % 2 != 0 && arr[i] < 0)
      count ++;
    else if ( i % 2 == 0 && arr[i] > 0)
      count ++;
  }
  return count;
}

int main()
{
 int N , i = 0;
 cin >> N;
 int A[N];
 while( N --)
 {
    cin >> A[i++];
 }
 int out1 , out2;
 out1 = alternative_array(i , A);
 A[0] *= -1;
 out2 = alternative_array(i , A) + 1;
 cout << min ( out1 , out2) << endl;
 return 0;
}
