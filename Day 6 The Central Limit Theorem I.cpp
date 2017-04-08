#include <bits/stdc++.h>
using namespace std;

double stdev(double mean, double sd, double x)
{
    double a = erf((x-mean)/(sd*pow(2.0,0.5)));
    return 0.5*(1+a);
}

int main()
{
    double a,n,mean,sd;
    cin >> a >> n >> mean >> sd;
    mean = mean * n;
    sd = sd * pow(n,0.5);
    cout.precision(4);
    cout << fixed << stdev(mean,sd,a);
    return 0;
}
