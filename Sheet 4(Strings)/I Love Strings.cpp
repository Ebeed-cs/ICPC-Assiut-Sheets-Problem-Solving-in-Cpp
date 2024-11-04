#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string S , T;
  int N;
  cin >> N;
  while(N--)
  {
    cin >> S >> T;
    int bigger =  (S.size() > T.size())? S.size() : T.size();
    for(int i = 0; i < bigger ; i++)
    {
      if(i < S.size())
        cout << S[i];
      if(i < T.size())
        cout << T[i];
    }
    cout << endl;
  }
  return 0;
}
