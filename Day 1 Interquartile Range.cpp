#include<bits/stdc++.h>
using namespace std;
float q1(vector<int> v)
{
    sort(v.begin(),v.end());
    int n=v.size();
    return (v[n/4-1]+v[n/4])/2;
}
float q3(vector<int> v)
{
    sort(v.begin(),v.end());
    int n=v.size();
    return (v[3*n/4]+v[3*n/4])/2;
}
int main()
{
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> f(n);
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    int nS =0;
    for(int i=0; i<n; i++)
    {
        cin>>f[i];
        nS+=f[i];
    }
    vector<int> s(nS);
    int index=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<f[i]; j++)
        {
            s[index]=x[i];
            index++;
        }
    }
    cout<<fixed<<setprecision(1)<<q3(s)-q1(s)<<endl;
    return 0;
}
//
