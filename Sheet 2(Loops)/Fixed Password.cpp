#include <iostream>
using namespace std;

int main()
{ 
    int input;
    int correct = 1999;
    string output = "";
    while(true)
    {
        cin >> input;
        if (input == correct)
            {
                output += "Correct\n";
                break;
            }
        else
                output += "Wrong\n";
    }
    cout << output << endl;
return 0;
}