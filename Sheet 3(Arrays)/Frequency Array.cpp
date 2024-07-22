#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 int N , M , input;
 cin >> N >> M;
 int A[M];
 fill(A , A + M , 0);
 while(N--)
 {
   cin >> input;
   A[input - 1] += 1;
 }
 while(M--)
 {
  cout << A[++N] << endl;
 }
 return 0;
}
