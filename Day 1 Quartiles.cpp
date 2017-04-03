#include<bits/stdc++.h>
using namespace std;
int arr[105];
int  Pera_Daw_Plz(int a[],int n)
{
    if(n%2)
        return a[n/2];
    else
        return (a[n/2]+a[n/2-1])/2;
}
int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
        cin>>arr[i];
    sort(arr,arr+N);
    if(N%2)
    {
        cout << Pera_Daw_Plz(arr,N/2) << endl ;
        cout << Pera_Daw_Plz(arr,N)<< endl;
        cout << Pera_Daw_Plz(arr,(N+N/2+1));
    }
    else
    {
        cout << Pera_Daw_Plz(arr,N/2) << endl;
        cout << Pera_Daw_Plz(arr,N)<< endl;
        cout << Pera_Daw_Plz(arr,(N+N/2));
    }
    /*
    if(N%2==1)
    {
        int len = (N/2);
        int len1 = (len)/2;
        cout<<(arr[len1]+arr[len1-1])/2<<endl;
        cout<<arr[len]<<endl;
        int len3 = len+N;
        int len4 = (len3/2);
        cout<<(arr[(len4)]+arr[(len4)+1])/2<<endl;
    }
    else
    {

    } */
    return 0;
}

