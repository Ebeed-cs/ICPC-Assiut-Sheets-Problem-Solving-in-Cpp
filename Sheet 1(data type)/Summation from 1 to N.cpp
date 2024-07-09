#include<bits/stdc++.h>
using namespace std;

long long sumation( double N)
{
  return N * (N + 1) / 2;
}
int main() {
int N;
cin >> N;
cout << sumation(N) << endl;
}