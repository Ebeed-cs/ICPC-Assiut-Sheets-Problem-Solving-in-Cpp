#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string S;
  cin >> S;
  int count = S.length();
  while(count --)
    {
      if(S[count] == ',')
        S[count] = ' ';
      else if(S[count] >= 'A' && S[count] <= 'Z')
        S[count] = char(S[count] + 32);
      else  
        S[count] = char(S[count] - 32);
    }
  cout << S << endl;
  return 0;
}
