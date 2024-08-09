#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int T , N , input , odd , even;
  cin >> T;
  while(T--)
  {
    cin >> N;
    even = odd = 0;
    while(N--)
    {
      cin >> input;
      if(input % 2 == 0)
        even ++;
      else
        odd ++;
    }
    N = odd + even;
    if(N % 2 != 0)
    {
      cout << -1 << endl;
      continue;
    }
    else
      cout << abs(even - odd)/2 << endl;
  }
  return 0;
}
