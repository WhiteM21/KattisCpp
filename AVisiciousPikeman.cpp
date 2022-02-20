// https://open.kattis.com/problems/pikemaneasy
#include <iostream>
using namespace std;

//compares values in the array
int compare(const void *p, const void *q)
{
    int *a = (int *)p;
    int *b = (int *)q;
    return *a - *b;
}

int main()
{
    //sets up all the variables needed in the program
    long n, t, a, b, c, penalty, ans, i, time_total;
    long times[10000];

    cin >> n >> t >> a >> b >> c >> times[0];

    for (i = 1; i < n; i++)
        times[i] = (a * times[i - 1] + b) % c + 1;

    //sorts the times array
    qsort(times, n, sizeof(long), compare);

    //calculates the time penalty given for solving as many problems as possible within the time limit
    penalty = 0;
    ans = 0;
    time_total = 0;
    for (i = 0; i < n; i++)
    {
        if (time_total + times[i] <= t)
        {
            penalty = (penalty + times[i] + time_total) % 1000000007;
            time_total += times[i];
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << " " << penalty << endl;
    return 0;
}