#include <iostream>
using namespace std;


int main() 
{
 int N ,T ,  count , start , loop , size , stop;
 cin >> T;
 while(T --)
 {
  count = start = stop = 0;
  cin >> size;
  N = size;
  int A[N];
  while(N--)
  {
    cin >> A[count++];
  }
  N = size - 1;
  while(N--)
  {
    loop = size - 1 - stop;
    while(loop --)
    {
      if(A[start] > A[start + 1])
        break;
      start ++;
      count ++;
    }
    stop ++;
    start = stop;
  }
 cout << count <<endl;
 }
 return 0;
}
