#include<iostream>
using namespace std;

int main() 
{   
    int N , i = 0 , j = 1 , count = 2;
    cin >> N;
    cout << i << " ";
    while( --N)
    {
        cout << i + j << " ";
        if(count % 2 != 0)
                i = i + j;
        else if(count % 2 == 0)  
                j = i + j;
        count++;
    }
    
    return 0;
}