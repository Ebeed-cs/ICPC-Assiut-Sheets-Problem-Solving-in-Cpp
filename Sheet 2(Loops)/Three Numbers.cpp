#include <iostream>
using namespace std;

int main() {
   int K , S , X , Y , Z , count = 0;
   cin >> K >> S;
   for ( int X = 0 ; X <= K ; X++)
   {
        for( int Y = 0 ; Y <= K ; Y++)
        {
            int Z = S - X -Y;        /* x + y + z = s
                                        z = s - x - y            
                                                  */  
                                     
            if( Z >= 0 && Z <= K)   /*
                                    here in above we asserted X , Y will be
                                    in the [0 , K] 
                                    but Z not yet so we need to confirm that 
                                    condition first 
                                     */
                count++;
        }
   }
   cout << count << endl;
    return 0;
}
