#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string input;
  int T;
  cin >> T;
  while(T --)
  {
    cin >> input;
    if(input.length() <= 10)
      {
          cout << input << endl;
          continue;
      }
    else 
      {
          cout << input[0] << input.length() - 2 << input[input.length() - 1]<< endl;
      }
  }
  return 0;
}
