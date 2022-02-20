//https://open.kattis.com/problems/pot

#include <iostream>
#include <math.h>
using namespace std;

//name is self-explanatory
int getTrueNum(int num){
    int power = num%10;
    int org_num = (num-power)/10;
    double true_num = pow(org_num,power);
    return true_num;
}

int main(){
    ios::sync_with_stdio(false);

    //takes in the raw numbers
    int n;
    cin >> n;
    int pre_nums[n];
    for (int i = 0; i < n; i++)
        cin >> pre_nums[i];

    //fixes and stores the intended form
    long long fix_nums[n];
    for (int i = 0; i < n; i++){
        fix_nums[i] = getTrueNum(pre_nums[i]);
    }
    
    //calulates and prints the sum of the numbers
    long long sum = 0;
    for (int i = 0; i < n; i++){
        sum += fix_nums[i];
    }
    cout << sum;

    return(0);
}