#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 int Q , size , input = 0;
 cin >> size >> Q;
 int A[size];
 while(size --)
 {
   cin >> A[input++];
 }
 size = input;
 sort(A , A + size);
 while( Q--)
 {
    bool found = false;
    int left , mid;
    left = mid = 0;
    int right = size - 1;
    cin >> input;
    while(right >= left)
    {
      mid = left + (right - left) / 2;
      if ( input == A[mid])
      {
        found = true;
        break;
      }
      else if ( input > A[mid])
        left = mid + 1;
      else
        right = mid - 1;
    }
    if ( found )
      cout << "found" << endl;
    else
      cout << "not found" << endl;
  }
 return 0;
}
