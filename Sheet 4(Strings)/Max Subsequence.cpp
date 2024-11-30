#include <iostream>
using namespace std;

int main()
{
    int count, max_size;
    max_size = 0;
    string input;
    cin >> count >> input;
    while (count--)
    {
        if (input[count] != input[count - 1])
            max_size++;
    }
    cout << max_size << endl;
}
