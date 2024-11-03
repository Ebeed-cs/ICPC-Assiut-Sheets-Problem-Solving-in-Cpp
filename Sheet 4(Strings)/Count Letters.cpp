#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() 
{
 string A;
 cin >> A;
 int frequency [26] = {0};
 for(char ch:A)
  frequency[int(ch) - 'a']++;
 for( int i = 0 ; i < 26 ; i++)
  {
    if (frequency[i] > 0)
      cout << char(i + 'a') << " : " << frequency[i] << endl;
  }
  return 0;
}
