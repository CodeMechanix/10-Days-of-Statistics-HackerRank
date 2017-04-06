#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,n;
    cin >> a >> b >> n;
    double success = double(a)/b;
    // P(n=1) + P(n=2) + P(n=3) + P(n=4) + P(n=5)
    double sum = 0.0;
    for(int i=1; i<=n; i++)
    {
        double geo = success * pow(1.0 - success, double(i-1));
        sum += geo;
    }
    cout.precision(3);
    cout << fixed << sum;
    return 0;
}
