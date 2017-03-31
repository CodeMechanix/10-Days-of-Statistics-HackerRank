#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int n;
    double m,sum1=0;
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
        sum1+=arr[i];
    }
    m = sum1/n;
    long long int  sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum+=((arr[i]-m)*(arr[i]-m));
    }
    double result = sqrt(sum/n);
    printf("%.1lf\n",result);
    return 0;
}
