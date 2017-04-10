#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x[100],y[100];
    double mx,my,stx,sty,sx,sy,n,s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
        sx+=x[i];
    }
    mx=sx/n;
    for(int i=0; i<n; i++)
    {
        cin>>y[i];
        sy+=y[i];
    }
    my=sy/n;
    for(int i=0; i<n; i++)
    {
        sty+=pow((y[i]-my),2);
    }
    sty=sty/n;
    sty=sqrt(sty);
    for(int i=0; i<n; i++)
    {
        stx+=pow((x[i]-mx),2);
    }
    stx=stx/n;
    stx=sqrt(stx);
    for(int i=0; i<n; i++)
    {
        s+=(x[i]-mx)*(y[i]-my);
    }
    s=s/(n*stx*sty);
    cout<<s<<endl;
    return 0;
}
