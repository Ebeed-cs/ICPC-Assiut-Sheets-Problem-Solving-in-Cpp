#include <iostream>
using namespace std;

int main() {
    int A, B, C, D , result;
    cin >> A >> B >> C >> D;
    A = A % 100;
    B = B % 100;
    C = C % 100;
    D = D % 100;
    result = A * B * C * D;
    result %= 100;
    if(result < 9)
        cout << "0" << result << endl;
    else 
        cout << result << endl;
    return 0;
}
