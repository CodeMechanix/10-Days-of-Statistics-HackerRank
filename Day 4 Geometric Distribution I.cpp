#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    double success = double(a)/b;
    double geo = success * pow(1.0 - success, double(c-1));
    cout.precision(3);
    cout << fixed << geo;
    return 0;
}
