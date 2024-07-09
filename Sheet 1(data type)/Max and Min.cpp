#include <iostream>
using namespace std;

int main() {
int A , B , C;
cin >> A >> B >> C;
int max = (A > B)? (A > C)? A : C : (B > C)? B : C ;
int min = (A < B)? (A < C)? A : C : (B < C)? B : C ;
cout << min << " " << max  << endl;
}