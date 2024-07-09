#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    long long sumR , sumL, L ,R , temp1 , temp2;
    while(T--)
    {
        cin >> temp1 >> temp2;
        L = (temp1 < temp2)? temp1 : temp2;
        R = ( temp2 > temp1)? temp2 : temp1;
        sumR = (R*(R+1)/2);
        sumL = (L-1)*L/2;
        cout << sumR - sumL << endl;
        
    }
    return 0;
}


