#include <iostream>
using namespace std;

int main()
{
  int N , i = 0;
  cin >> N;
  int A[N];
  while( N -- )
  {
    cin >> A[i++];
  }
  int HN;
  N = i;
  HN = N /2;
  i = 0;
  while( i  < HN)
  {
    cout << A[i] << " ";
      cout << A[N-1-i] << " ";
    i++;
  }
  if (N % 2 != 0)
  {
    cout << A[N / 2];
  }
  return 0;
}
