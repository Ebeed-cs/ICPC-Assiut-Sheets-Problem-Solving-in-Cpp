#include <iostream>
#include <cmath>
using namespace std;




int main() 
{
    int T , i  , maximum , check , stop;
    cin >> T;
    while( T--)
    {
        i = 0;
        int N , size;
        cin >> size;
        int arr[size];
        N  = size;
        while(N--)
        {
            cin >> arr[i];
            cout << arr[i++] << " ";
        }
        N = size - 1;
        i = stop = 0;
        while(N--)
        {
            check = size - 1 - stop;
            while(check-- )
            {
                if (i == stop)
                {
                    maximum = max(arr[i] , arr[i+1]);
                    cout << maximum << " ";
                    i++;
                    continue;
                }
                maximum = max(maximum , arr[i+1]);
                i++;
                cout << maximum << " ";
            }
            stop++;
            i = stop;
        }
        cout << endl;
    }
    return 0;
}
