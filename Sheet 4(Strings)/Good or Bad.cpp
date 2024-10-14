#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string S;
  int T;
  cin >> T;
  while(T --)
  {
	cin >> S;
	bool good = false;
	int test , count;
	test = count = 0;
	while(count < S.length() - 1)
	{
		if(S[count] != S[count + 1])
		{
			test ++;
			if(test == 2)
			{
				good = true;
				break;
			}
		}
		else 
			test = 0;
			
		count ++;
	}
	if(good)
		cout << "Good" << endl;
	else	
		cout << "Bad" << endl;
  }
  return 0;
}
