#include <iostream>
#include <math.h>
using namespace std;

 
int main()
{
    int N , last_row_stars , count;
    cin >> N;
    bool entered = true;
    last_row_stars = N + (N -1);
    for( int i = 0 ; i < N ; i++)
        {   
            count = last_row_stars;
            do
            {
                if(count <= last_row_stars/2 + 1 + i && count >= last_row_stars/2 + 1 - i )
                {
                    cout << "*";
                    entered = false;
                }
                else 
                    if( entered)
                        cout << " ";
                
            } while (count--);
            entered = true;
            cout << endl;
        }     
    return 0;
}