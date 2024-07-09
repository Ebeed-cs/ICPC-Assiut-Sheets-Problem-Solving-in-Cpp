#include <iostream>
using namespace std;

// the column turn each four seats then modulus over 4
int main() 
{
    long long id , column;
    cin >> id;
    
    long long row = id / 4;
    if ( row % 2 == 0 ) // the arrangment to the row is zigzag pattern not straight forward
    {
        column = id % 4; // left to right 
    }
    else 
        column = 3 - id % 4; // right to left  

    cout << row <<  " " << column << endl;


    return 0;
}
