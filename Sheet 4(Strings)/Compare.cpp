#include <iostream>
#include <string>
using namespace std;


int main(){
	string S1 , S2;
	cin >> S1 >> S2;
	int count = min(S1.size() , S2.size()) , i = 0;
	string smaller = (S1.size() > S2.size())? S2 : S1;
	while(count--)
	{
		if(int(S1[i]) < int(S2[i]))
		{
			smaller = S1;
			break;
		}
		else if(int(S1[i]) > int(S2[i]))
		{
			smaller = S2;
			break;
		}
		i++;
	}
	cout << smaller << endl;
    return 0;
}
