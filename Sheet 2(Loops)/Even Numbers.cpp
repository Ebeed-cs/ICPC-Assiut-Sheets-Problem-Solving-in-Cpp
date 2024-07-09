#include <iostream>
using namespace std;

int main() {
    int N;
    bool entered = false;
    cin >> N;
    for ( int i = 0 ; i <= N ; i++)
    {
        if (i % 2 == 0 && i != 0)
            {
                cout << i << endl;
                entered = true;
            }
    }
    if (! entered)
        cout << -1 << endl;
}