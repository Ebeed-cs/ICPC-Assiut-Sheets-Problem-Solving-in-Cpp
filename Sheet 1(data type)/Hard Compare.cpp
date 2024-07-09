#include <iostream>
#include <cmath>
using namespace std;

void hardCompare(int A , long long  B , int C , long long D)
{
    double result;
    if ( B*log(A) > D*log(C))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}
int main() {
    int A , C;
    long long B , D;
    cin >> A >> B >> C >> D;
    hardCompare(A , B , C , D);
    return 0;
}
