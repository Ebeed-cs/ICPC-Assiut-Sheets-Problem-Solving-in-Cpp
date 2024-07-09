#include <iostream>
#include <algorithm>
using namespace std;

void DataTypeGuessing( double n ,double k ,double a) {
    double test = n * k / a;
    long long result = test;
    if ( test != result )
        cout << "double" << endl;
    else if ( test >=  INT_MIN && test <= INT_MAX)
        cout << "int" << endl;
    else
        cout << "long long" << endl;
}

int main() {
double n , k , a;
cin >> n >> k >> a;
DataTypeGuessing(n , k , a);
}
