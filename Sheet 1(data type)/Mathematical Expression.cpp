#include <iostream>
#include <cmath>
using namespace std;

void MathematicalExpresion( int A , char S , int B , int R)
{
    switch (S)
    {
    case '+':
        if (A + B == R)
            cout << "Yes" << endl;
        else 
            cout << A + B << endl;    
        break;
    case '-':
        if (A - B == R)
            cout << "Yes" << endl;
        else 
            cout << A - B << endl;    
        break;
    case '*':
        if (A * B == R)
            cout << "Yes" << endl;
        else 
            cout << A * B << endl;    
    }
}

int main() {
    int A, B , R;
    char S , Q;
    cin >> A >> S >> B >> Q >> R;
    MathematicalExpresion( A , S , B , R);
    return 0;
}
