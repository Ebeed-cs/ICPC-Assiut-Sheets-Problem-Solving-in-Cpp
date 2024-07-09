#include <iostream>
using namespace std;

void draw_X( int N)
    { 
        for( int i = 0 ; i < N; i++)
        {
            for(int j = 0 ; j < N; j++)
            {   
                if (i == N/2)
                    {
                        int count = N;
                        while(count --)
                        {
                            if(count == N/2)
                                cout << "X";
                            else
                                cout << "*";
                        }
                        break;
                    }

                else if( j == i)
                    cout << "\\";
                else if (j == N-1-i)
                    cout << "/";
                else
                    cout << "*"; 
            }
        cout << endl;
        }
    }

int main() {
    int N;
    cin >> N;
    draw_X(N);
    return 0;
}


