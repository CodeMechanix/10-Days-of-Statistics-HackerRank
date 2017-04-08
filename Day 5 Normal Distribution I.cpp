#include <bits/stdc++.h>
using namespace std;

double n_std_dev(double m, double sd, double a)
{
    double b = erf((a-m)/(sd*pow(2.0,0.5)));
    return 0.5*(1+b);
}

int main()
{
    double mean, sd, x ,y ,z;
    cin >> mean >> sd >> x >> y >> z;
    cout.precision(3);
    cout <<fixed <<n_std_dev(mean, sd, x) <<endl <<n_std_dev(mean,sd,z)-n_std_dev(mean,sd,y) ;
    return 0;
}
