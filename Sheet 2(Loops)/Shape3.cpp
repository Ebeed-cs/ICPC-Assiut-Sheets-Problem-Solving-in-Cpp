#include<iostream>
using namespace std;

void draw_pyramid(int N ,bool reverse)
{
    int last_row_stars , count ,i ,  help;
    bool entered = true;
    last_row_stars = 2*N -1;
    for(i = 0 ; i < N  ; i++)
    {
        count = last_row_stars;
        do
        {
            help = (reverse)?  N -1-i : i;
            if(count <= last_row_stars/2 + 1 + help && count >= last_row_stars/2 + 1 - help)
                {
                    cout << "*";
                    entered = false;
                }
            else
                if(entered)
                    cout << " ";
        } while (count--);
        entered = true;
        cout << endl;
    }
}
int main() 
{   int N;
    cin >> N;
    draw_pyramid(N , false);
    draw_pyramid(N , true);
    
    return 0;
}