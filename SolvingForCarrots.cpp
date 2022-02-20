//https://open.kattis.com/problems/carrots
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    //takes in a bunch of garbage, and only prints p (the answer)
    int n,p;
    cin >> n >> p;
    for (int i = 0; i > n; i++){
        string trash;
        cin >> trash;
    }
    cout << p;

    return 0;
}