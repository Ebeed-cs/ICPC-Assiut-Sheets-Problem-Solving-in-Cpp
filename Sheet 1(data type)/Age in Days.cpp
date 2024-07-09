#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int N , years , months , days;
    cin >> N;
    years = N / 365;
    N %= 365;
    months = N / 30;
    N %= 30;
    days = N;
    cout << years << " years" << endl;
    cout << months <<  " months"<< endl;
    cout << days <<  " days" << endl;    
    return 0;
}
