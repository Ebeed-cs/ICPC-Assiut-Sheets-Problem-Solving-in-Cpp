#include <iostream>
using namespace std;

int main()
{
 int N , M , x , y;
 cin >> N >> M;
 char A[N][M];
 for( int i = 0; i < N ; i++)
  for( int j = 0 ; j < M ; j++)
    cin >> A[i][j];
  cin >> x >> y;
  x--; y--;
  if(   A[x-1][y]   != '.' && A[x+1][y]   != '.'
     && A[x][y-1]   != '.' && A[x][y+1]   != '.'
     && A[x+1][y+1] != '.' && A[x+1][y-1] != '.'
     && A[x-1][y+1] != '.' && A[x-1][y-1] != '.' )
      cout << "yes" << endl;
  else
      cout << "no" << endl;
 return 0;
}
