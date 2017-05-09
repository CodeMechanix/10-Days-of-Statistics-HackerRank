#include<bits/stdc++.h>
using namespace std;
int arr[100005];
double GetMode(int daArray[], int iSize)
{
    // Allocate an int array of the same size to hold the
    // repetition count
    int* ipRepetition = new int[iSize];
    for (int i = 0; i < iSize; ++i)
    {
        ipRepetition[i] = 0;
        int j = 0;
        bool bFound = false;
        while ((j < i) && (daArray[i] != daArray[j]))
        {
            if (daArray[i] != daArray[j])
            {
                ++j;
            }
        }
        ++(ipRepetition[j]);
    }
    int iMaxRepeat = 0;
    for (int i = 1; i < iSize; ++i)
    {
        if (ipRepetition[i] > ipRepetition[iMaxRepeat])
        {
            iMaxRepeat = i;
        }
    }
    delete [] ipRepetition;
    return daArray[iMaxRepeat];
}
int main()
{
    int N,cnt=0;
    double sum=0,mean=0,median=0,mode=0,sum1=0;
    cin>>N;
    for(int i=0; i<N; i++) 
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    mean = (sum)/N;
    sort(arr,arr+N);
    if(N%2==0)
    {
        cnt = N/2;
        median =(float) (arr[cnt-1]+arr[cnt])/2;
    }
    else
    {
        median = arr[N/2];
    }
    cout<<mean<<endl<<median<<endl<<GetMode(arr,N)<<endl;
}
