#include <iostream>
using namespace std;

int main()
{
 int N , M , i;
 cin >> N  >> M;
 int A[M];
 i = M;
 N = N * M;
 while(N --)
 {
  cin >> A[--M];
  if(!M)
  {
    while(M < i)
    {
      cout << A[M] << " ";
      M++;
    }
    cout << endl;
  }
 }
 return 0;
}
