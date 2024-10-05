#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string input;
  long long sum = 0;
  cin >> input;
  int count = input.length();
  while(count--)
  {
    sum += input[count] - '0';
  }
  cout << sum;
  return 0;
}
