#include <iostream>
using namespace std;

int main()
{
 int T;
 cin >> T;
 while( T--)
 {
  int W , H;
  cin >>W >> H;
  if ( W == H)
    cout << "Square" << endl;
  else
    cout << "Rectangle" << endl;
 }
 return 0;
}
