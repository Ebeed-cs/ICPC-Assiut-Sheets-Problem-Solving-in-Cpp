#include <iostream>
#include <string>
using namespace std;

void interval(float i)
{
    string interval = (i >= 0 && i <= 25) ? "Interval [0,25]" :
                      (i > 25 && i <= 50) ? "Interval (25,50]" :
                      (i > 50 && i <= 75) ? "Interval (50,75]" :
                      (i > 75 && i <= 100) ? "Interval (75,100]" :
                      "Out of Intervals";
    cout << interval << endl;
}

int main() 
{
    float input;
    cin >> input;
    interval(input);  
    return 0;
}
