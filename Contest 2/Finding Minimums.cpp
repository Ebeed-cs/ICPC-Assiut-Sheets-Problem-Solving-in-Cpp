#include <iostream>
using namespace std;

int main() {
    int N, K , input , groups_num , count , smaller , test = 0;
        cin >> N >> K;
        groups_num = (N % K == 0)? N/K : N/K + 1;
        while(groups_num --)
        {
            if (groups_num == 0)
            {
                count = N - test * K;
    
            }
            else
                count = K;
            smaller = 1000000000;
            while( count-- )
            {
                cin >> input;
                if ( smaller >= input)
                    smaller = input;
            }
            cout << smaller << endl;
            test ++;
        }
}


