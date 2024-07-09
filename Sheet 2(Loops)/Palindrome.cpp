#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string N , reversed_word;
    cin >> N;
    string isPalindroma = "YES";
    int i = 0 , reversed_num = 0;
    while( i != size(N))
    {
        reversed_word += N[size(N) - i - 1];
        i++;
    }
    if(reversed_word != N)
        isPalindroma = "NO";
    
    i = 0;
    while(i != size(N))
    {
        
            reversed_num = reversed_num * 10 + ( reversed_word[i] - '0');
        i++;
    }
    cout << reversed_num << endl;
    cout << isPalindroma  << endl;
    return 0;
}
