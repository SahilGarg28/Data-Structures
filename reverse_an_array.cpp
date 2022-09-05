#include <iostream>

using namespace std;

void reverse(int arr[],int n)
{
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
         int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={18,8,0,0,15};
    reverse(arr,5);

    return 0;
}
