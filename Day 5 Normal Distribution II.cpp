#include <bits/stdc++.h>
using namespace std;

double percent(double mean, double sd, double x)
{
    double a = erf((x-mean)/(sd*pow(2.0,0.5)));
    return 0.5*(1+a)*100;
}

int main()
{
    double mean, sd, x, y;
    cin >> mean >> sd >> x >> y;
    cout.precision(2);
    cout << fixed << double(100)-percent(mean,sd,x) << endl
         << double(100)-percent(mean,sd,y) << endl
         << percent(mean,sd,y);
    return 0;
}
