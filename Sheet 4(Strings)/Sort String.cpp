#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int alphabet[27] = { 0 };
	char input;
	while (N--)
	{
		cin >> input;
		alphabet[int(input) - 'a']++;
	}
	while (++N < 27)
	{
		if (alphabet[N] > 0)
			while (alphabet[N]--)
				cout << char(N + 'a');
	}	
return 0;
}
