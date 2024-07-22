#include <iostream>
using namespace std;

int main()
{
 int N , M , i , j , input;
 bool sub = true;
 cin >> N >> M;
 int A[N];
 i = j = 0;
 while( N --)
 {
  cin >> A[i++];
 }
 while( M --)
 {
  cin >> input;
  while(j < i)
  {
    if( A[j] == input)
    {
      j++;
      break;
    }
    j++;
  }
  if((j == i  && M) || (j == i && A[j-1] != input))
  {
    sub = false;
    break;
  }
 }
 if( sub )
  cout << "YES" << endl;
 else
  cout << "NO" << endl;
 return 0;
}
