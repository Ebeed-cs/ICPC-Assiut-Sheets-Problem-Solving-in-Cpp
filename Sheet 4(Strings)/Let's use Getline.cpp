#include <iostream>
#include <string>
using namespace std;


int main(){
	string S , test = "";
	int count , i = 0;
	getline(cin , S);
	count = S.size();
	while(count --)
	{
		if(S[i] != '\\')
			test += S[i];
		else
			break;
		i ++;
	}
	cout << test << endl;
    return 0;
}
