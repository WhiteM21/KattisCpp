//https://open.kattis.com/problems/speedlimit
#include <iostream>
using namespace std;

int main(){
    //sets up a while loop that only stops when -1 is inputted
    bool stop = false;
    while (stop == false){
        int n;
        cin >> n;

        if (n != -1){
            //takes in the mph and the total time elapsed
            int speed[n],time[n];
            for (int i = 0; i < n; i++){
                cin >> speed[i] >> time[i];
            }

            //calculates and prints the total distance
            long distance = speed[0] * time[0];
            for (int i = 1; i < n; i++){
                distance += speed[i] * (time[i]-time[i-1]);
            }

            cout << distance << " miles\n";
        }

        else 
            stop = true;
    }
}