#include <iostream>
using namespace std;

int main()
{ 
    int N;
    cin >> N;
    for ( int i = 0 ; i < 12 ; i++)
    {
        cout << N << " * " << i+1 << " = " << N * (i+1) << endl;   
    }  
    return 0;
}
