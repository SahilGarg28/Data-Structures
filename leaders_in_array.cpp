#include <iostream>
using namespace std;
void leaders(int arr[],int n)
{
    int curr_leader=arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>curr_leader)
        {
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
    
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

    leaders(arr,n);


    return 0;
}
