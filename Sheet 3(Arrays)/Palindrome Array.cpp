#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    int N, i = -1, input , stop , count;
    cin >> N;
    bool palindrome = true;
    stop = (N % 2 == 0)? N/2 : N/2 + 1;
    count = N;
    int A[stop];
    while(N--)
    {
        cin >> input;
        if (stop-- > 0)
        {
            i++;
           A[i] = input;
        }
        else
        {
            
            if ( count % 2 == 0){

                if(A[i] != input)
                {
                    palindrome = false;      
                    break;   
                }
                i--;
             }
            else{

                i--;
                if(A[i] != input)
                {
                    palindrome = false;    
                    break;   
                }
            }
        }
    }
    if ( !palindrome)
        cout << "NO" << endl;
    else 
        cout << "YES" << endl;
    return 0;
}
