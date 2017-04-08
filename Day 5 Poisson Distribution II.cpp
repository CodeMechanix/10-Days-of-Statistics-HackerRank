#include<bits/stdc++.h>
using namespace std;
int  main()
{
    /* Read and save input */
    double A;
    double B;
    cin>>A>>B;

    /* E[x^2] = lambda + lambda^2. Plug this into each formula */
    double dailyCostA = 160 + 40 * (A + (A * A));
    double dailyCostB = 128 + 40 * (B + (B * B));

    /* Print output */
    printf("%.3f\n", dailyCostA);
    printf("%.3f\n", dailyCostB);

    return 0;
}
