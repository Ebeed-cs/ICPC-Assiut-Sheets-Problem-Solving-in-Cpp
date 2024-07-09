#include <iostream>
#include <cmath>
using namespace std;

void comparison( int A , char S , int B)
{
    string result = "Wrong input";
    switch (S)
    {
    case '>':
        result = (A > B)? "Right" : "Wrong";
        break;
    case '<':
        result = (A < B)? "Right" : "Wrong";
        break;
    case '=':
        result = (A == B)? "Right" : "Wrong";
        break;
    }
    cout << result << endl;
}

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;
    comparison( A , S , B);
    
    return 0;
}
