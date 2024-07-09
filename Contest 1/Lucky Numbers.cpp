#include <iostream>
using namespace std;


int main() {
    int N , firstD , secondD;
    cin >> N;
    firstD = N / 10;
    secondD = N % 10;
    if( secondD == 0 || firstD % secondD == 0 || secondD % firstD == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
