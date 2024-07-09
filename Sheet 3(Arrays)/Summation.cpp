#include <iostream>
#include <cmath>
using namespace std;

/*
    solution wiht an illegal trick in summition the numbers to 
    pervent doing another  loop to summition the elements in the array
*/
int main() 
{
    int N, i , input;
    cin >> N;
    int A[N];
    long long sum;
    sum = i = 0;
    while( N--)
    {
        cin >> input;
        A[i++] = input;
        sum += input;
    }
    sum = (sum < 0)? sum*-1 : sum;
    cout << sum << endl; 
    return 0;
}
