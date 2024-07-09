#include <iostream>
#include <iomanip> // Include <iomanip> header for std::fixed and std::setprecision
using namespace std;

void WinterSale(float X, float P) {
    X = (100 - X) / 100;
    cout << fixed << setprecision(2) << P / X << endl;
}

int main() {
    float X, P;
    cin >> X >> P;
    WinterSale(X, P);
    return 0;
}
