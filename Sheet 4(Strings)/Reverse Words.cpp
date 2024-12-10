#include <iostream>
using namespace std;

int main() {
	string input, word;
	word = "";
	int count = -1;
	int terminator = 0;
	getline(cin, input);
	for (char c : input)
	{
		word += c;
		count++;
		terminator++;
		if (c == ' ' || terminator == input.length())
		{
			if (terminator == input.length())
				cout << word[word.length() - 1];
			while (count--)
				cout << word[count];
			if (!(terminator == input.length()))
				cout << ' ';
			word = "";
		}
	}
}
