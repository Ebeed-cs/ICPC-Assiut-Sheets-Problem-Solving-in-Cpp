#include <iostream>
using namespace std;

int main() 
{
 int N , i, count, min = INT_MAX;
 cin >> N;
 while(N --)
 {
  cin >> i;
  while(true)
  {
    if( i % 2 == 0)
    {
      count ++;
      i /= 2;
    }
    else
    {
    if (count < min)
      min = count;
    break;
    }
  }
  count = 0;
 }
 cout << min << endl;
 return 0;
}
