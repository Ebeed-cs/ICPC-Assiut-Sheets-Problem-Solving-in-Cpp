#include <iostream>
using namespace std;

int floor(int A , int B){ return A/B;}

int ceil(float A , float B)
{
  int imedate = (A/B > int(A/B))? 1 : 0;
  return int(A/B) + imedate ;
}

int round( float A , float B){
  float floated = A / B;
  int integer = int(floated);
  if ( int((floated - integer)* 10) >= 5)
    return ceil( A , B);
  else 
    return floor( A , B);
}
int main() {
int A , B;
cin >> A >> B;
cout <<"floor "<< A << " / "<< B << " = "<< floor(A , B) << endl;
cout <<"ceil "<< A << " / "<< B << " = "<< ceil(A , B) << endl;
cout <<"round "<< A << " / "<< B << " = "<< round(A , B) << endl;
}