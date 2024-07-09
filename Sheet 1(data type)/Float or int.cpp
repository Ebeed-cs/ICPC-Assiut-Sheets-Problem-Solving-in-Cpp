#include <iostream>
#include <iomanip>
using namespace std;

void floatorint( float N)
{
    if( N == int(N))
    {
        cout << "int " << int(N) << endl;
    }
    else 
        cout << "float " << int(N)<< " "<< setprecision(3) << N - int(N) <<  endl;
}

int main()
{
    float N;
    cin >> N;
    floatorint(N);
    return 0;
}
