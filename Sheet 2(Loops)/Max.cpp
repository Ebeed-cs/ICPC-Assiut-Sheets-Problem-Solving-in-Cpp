#include <iostream>
using namespace std;

int main()
{ 
    int size , input , max = 0;
    cin >> size ;
    do{
        cin >> input;
        max = (max > input)? max : input;
    }while(size -= 1);
    cout << max << endl;
   
return 0;
}
