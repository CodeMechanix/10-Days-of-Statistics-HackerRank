#include<bits/stdc++.h>
using namespace std;
int arr[105];
int arr1[105];
int main()
{
    int N;
    double sum1=0.0,sum=0.0;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=N; i++)
    {
        cin>>arr1[i];
        sum1+=arr1[i];
    }
    for(int i=1; i<=N; i++)
    {
        sum+=(arr1[i]*arr[i]);
    }
    double result =(double) (sum/sum1);
    printf("%.1lf\n",result);
    return 0;
}
