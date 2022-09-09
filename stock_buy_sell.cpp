#include <iostream>

using namespace std;
int maxprofit(int arr[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        profit+=arr[i]-arr[i-1];
    }
    return profit;
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

    cout<<maxprofit(arr,n);


    return 0;
}
