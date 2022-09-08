#include <iostream>

using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    return b;
}
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int maxDiff(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int min_value=arr[0];
    for(int j=1;j<n;j++)
    {
        res=max(res,arr[j]-min_value);
        min_value=min(min_value,arr[j]);
    }
    return res;
    
}

int main()
{
    
    int n;
    cout<<"Enter number of elements in array:  ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {   
        cout<<"Enter Element at "<<i<<" postion: ";
        cin>>arr[i];
    }

    cout<<maxDiff(arr,n);


    return 0;
}
