#include <bits/stdc++.h>
using namespace std;

double stdev(double mean, double sd, double x)
{
    double a = erf((x-mean)/(sd*pow(2.0,0.5)));
    return 0.5*(1+a);
}

int main()
{
    double tickets, n, mean, sd;
    cin >> tickets >> n >> mean >> sd;
    mean *= n;
    sd *= pow(n,0.5);
    cout.precision(4);
    cout << fixed << stdev(mean,sd,tickets);
    return 0;
}
