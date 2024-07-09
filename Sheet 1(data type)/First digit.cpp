#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cin >> input;
    int firstDigit = input[0] - '0';
    input = (firstDigit % 2 == 0)? "EVEN" : "ODD";
    cout << input << endl;
    return 0;
}
