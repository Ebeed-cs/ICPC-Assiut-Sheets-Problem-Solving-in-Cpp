#include <iostream>
using namespace std;

int main() {
    int N , neg , pos , even , odd;
    neg = pos = even = odd = 0;
    cin >> N;
    int arr[N];
    for ( int i = 0 ; i < N ; i++ )
    {
        cin >>arr[i];
    }
    for ( int i = 0 ; i < N ; i++)
    {
        if ( arr[i] < 0)
            neg += 1;
        if ( arr[i] > 0)
            pos += 1;
        if ( arr[i] % 2 == 0)
            even += 1;
        if ( arr[i] % 2 != 0)
            odd += 1;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}