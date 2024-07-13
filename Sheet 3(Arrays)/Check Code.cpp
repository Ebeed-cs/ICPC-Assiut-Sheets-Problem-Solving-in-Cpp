#include <iostream>
using namespace std;

int main() 
{
 string S;
 int A , B;
 cin >> A >> B;
 cin >> S;
 if(S[A] == '-')
    cout << "Yes" << endl;
 else 
    cout << "No" << endl;

 return 0;
}
