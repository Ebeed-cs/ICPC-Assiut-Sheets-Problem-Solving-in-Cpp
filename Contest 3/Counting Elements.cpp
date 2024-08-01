#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int arr[] , int search , int left , int right)
{
  int mid;
  while( left <= right)
  {
    mid = (right - left) / 2 + left;
    if( arr[mid] == search)
      return mid;

    else if(arr[mid] > search)
      right = mid - 1;

    else
      left = mid + 1;
  }
  return -1;
}

int main()
{
 int N , i = 0;
 cin >> N;
 int A[N];
 while( N--)
 {
  cin >> A[i++];
 }
 N = i;
 sort( A , A + N);
 int count , size = i;
 count = i = 0;
 while(N --)
 {
    if( binary_search(A , A[i++] + 1 , 0 , size - 1) != -1 )
      count ++;
 }
 cout << count << endl;
 return 0;
}
