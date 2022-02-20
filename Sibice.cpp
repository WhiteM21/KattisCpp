//https://open.kattis.com/problems/sibice

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    //takes in the number of matches, the width of the box, and the height
    int n,w,h;
    cin >> n >> w >> h;

    //takes in the length of each match
    int match_lengths[n];
    for (int i = 0; i < n; i++)
        cin >> match_lengths[i];

    //calculates the hypotenuse of the box, and then outputs whether each match can fit
    float box_hypo = sqrt( pow(w,2) + pow(h,2) );
    for (int i = 0; i < n; i++){
        if (match_lengths[i] <= box_hypo)
            cout << "DA\n";
        else
            cout << "NE\n";
    }

    return 0;
}
