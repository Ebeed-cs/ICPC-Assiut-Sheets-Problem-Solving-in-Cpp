#include <iostream>
#include <algorithm>
using namespace std;

void Katryoshka(long long eye , long long mouth , long long body) {
   long long katryoshka = 0;
    if( eye > 0 && mouth > 0 && body > 0 )
    {
        katryoshka = min({eye , mouth , body});
        eye -= katryoshka;
        body -= katryoshka;
        mouth -= katryoshka; 
    }
    if (eye > 1 && body > 0)
    {
        eye /= 2;
        if ( eye <= body)
        {
            katryoshka += eye;
        }
        else if ( eye > body)
        {
            katryoshka += body;
        }
    }
    cout << katryoshka << endl;
}

int main() {
    long long eye , mouth , body;
    cin >> eye >> mouth >> body;
    Katryoshka( eye , mouth , body);
    return 0;
}
