#include <iostream>
using namespace std;
#include <cmath>

int main()
{
 int sum1 , sum2 , N , i , j , count , size , input;
 sum1 = sum2 = i = count = 0;
 cin >> N;
 j = N - 1;
 size = N * N;
 while(count < size)
 {
  cin >> input;
  if( count == i)
  {
    sum1 += input;
    i += N + 1;
  }
  if( count == j && j <= (N-1)*N)
  {
    sum2 += input;
    j += N-1;
  }
  count ++;
 }
 cout << abs(sum1 - sum2) << endl;
 return 0;
}
