#include <iostream>
#include <string>
using namespace std;
int main()
{
	string S;
	bool inside_word = false;
	int word_count = 0;
	getline(cin, S);
	for (char c : S)
	{
		if (isalpha(c))
		{
			if (!inside_word)
			{
				word_count++;
				inside_word = true;
			}
		}else
			inside_word = false;
	}
	cout << word_count << endl;
}
