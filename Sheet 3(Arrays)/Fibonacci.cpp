#include <iostream>
using namespace std;

int main() 
{
 int N;
 cin >> N;
 if ( N == 1)
   cout << 0 << endl;
 else if (N == 2)
   cout << 1 << endl;
 else
 {
   long long prev = 0 , cur = 1 , temp;
   while(N-- > 2 )
   {
      temp = cur;
     cur = prev + cur;
     prev = temp;
   }
   cout << cur << endl;
 }  
 return 0;
}
