//REVERSAL ALGORITHM


#include <iostream>

using namespace std;
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
void reverse(int arr[],int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftrotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
int n,d;
cout<<"Enter number of elements in array:  ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{   
    cout<<"Enter Element at "<<i<<" postion: ";
    cin>>arr[i];
}
cout<<"Enter the value by which you want the array to be left roated: ";
cin>>d;
leftrotate(arr,n,d);

    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}


}
