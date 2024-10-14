#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string S;
  cin >> S;
  int count = (S.length() % 2 == 0)? S.length() / 2 : S.length()/2 + 1;
  int next , prev;
  next = count;
  if ( S.length() % 2 )
    prev = count - 2;
  else
    prev = count - 1;
  while(next < S.length())
  {
    if(S[prev] != S[next])
      break;
    next ++;
    prev --;
  }
  if(next < S.length())
    cout << "NO" << endl;
  else 
    cout << "YES" << endl;
  return 0;
}
