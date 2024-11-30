#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int count = 0;
    bool here = false;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == "hello"[count])
        {
            count++;
            if (count == 5)
            {
                here = true;
                break;
            }
        }
    }
    if(here)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}
