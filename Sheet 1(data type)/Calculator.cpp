#include <iostream>
#include <string>
using namespace std;

void simpleCalculator( string &str)
{
    int num1 , num2;
    num1 = num2 = 0;
    int index = 0;
    string ope;
    for ( ; index < str.length() ; ++index)
    {
        if(isdigit(str[index]))
            num2 = num2 * 10 + str[index] - '0';
        else
        {
            ope = str[index];
            num1 = num2;
            num2 = 0;
        }
    }
    if(ope == "+")
        cout << num1 + num2 << endl;
    else if (ope == "-")
        cout << num1 - num2 << endl;
    else if ( ope == "*")
        cout << num1 * num2 << endl;
    else 
        cout << num1 / num2 << endl;

}
int main() 
{
    string str;
    cin >> str;
    simpleCalculator(str);
    return 0;
}
