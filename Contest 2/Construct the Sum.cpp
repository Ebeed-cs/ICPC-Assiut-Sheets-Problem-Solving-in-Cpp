#include <iostream>
using namespace std;

/*
contest 2 G . constuct the sum 
not combleted yet 
*/  
int main() 
{
    int T;
    long long s , sum , n;
    string num = "";
    cin >> T;
    while( T--)
    {
        cin >> n >> s;
        num = "";
        if( n*(n+1)/2 < s)
            cout << -1 << endl;
        else{
            sum = 0;
            for ( int i = n ; i >= 1 ; --i)
            {
                if( sum + i > s )
                    continue;
                else    
                {
                    sum += i;
                    num += to_string(i) + " ";
                    if( sum == s)
                        break;
                }
            }
            cout << num << endl;
            } 
    }
        
return 0;
}
