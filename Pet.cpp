//https://open.kattis.com/problems/pet

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    // takes in the contestants' scores
    int comp_grades[5][4];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            cin >> comp_grades[i][j];
        }
    }
    
    // calculates the contestants' total scores
    int totals[5];
    for (int i = 0; i < 5; i++){
        int sum = 0;
        for (int j = 0; j < 4; j++){
            sum += comp_grades[i][j];
        }
        totals[i] = sum;
    }

    // finds the highest total score
    int max = totals[0];
    for (int i = 0; i < 5; i++){
        if (totals[i] > max){
            max = totals[i];
        }
    }
    // finds who the highest score belongs to
    int ans_index;
    for (int i = 0; i < 5; i++){
        if (totals[i] == max){
            ans_index = i+1;
            break;
        }
    }
    //prints the answer!
    cout << ans_index << ' ' << max;
    return 0;
}