//https://open.kattis.com/problems/bijele

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    // takes in how many of each piece there are, and ouputs how many are need to complete the set.
    int king,queen,rook,bishop,knight,pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    cout << 1-king << ' ' << 1-queen << ' ' << 2-rook << ' ' << 2-bishop << ' ' << 2-knight << ' ' << 8-pawn;

    return 0;
}