#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int A , B , count , index = 0;
    string check , collect = "";
    cin >> A >> B;
    for ( A ; A <= B ; A++)
    {
        check = to_string(A);
        count = size(check) + 1;
        while( count -= 1)
        {
            if ( check[index] != '7' && check[index] != '4')
            {
                break;
            }
            index++;
        }
        if( count == 0)
            collect += to_string(A) + " ";
        index = 0;
    }
    if (size(collect) > 0)
        cout << collect << endl;
    else
        cout << -1 << endl;
    return 0;
}