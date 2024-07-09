#include <iostream>
#include <algorithm>
using namespace std;

void twoIntervals(  int l1 ,int r1 , int l2 , int r2 )
{
    int left_boundary = max(l1 , l2);
    int right_boundary = min( r1 , r2);

    if ( left_boundary <= right_boundary)
        cout << left_boundary << " " << right_boundary << endl;
    else 
        cout << -1 << endl;

}

int main() {
    int l1 , r1 , l2 , r2;
    cin >> l1 >> r1 >> l2 >> r2 ;
    twoIntervals(  l1 , r1 , l2 , r2);
    return 0;
}
