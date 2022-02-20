///https://open.kattis.com/problems/modulo
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> input (10);
    for (int i = 0; i < 10; i++){
        int x;
        cin >> x;
        input[i] = x%42;
    }
    sort( input.begin(), input.end() );
    input.erase( unique( input.begin(), input.end() ), input.end() );
    
    cout << input.size();
    return 0;
}