

#include <iostream>

using namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
void MoveZeroEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
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

MoveZeroEnd(arr,n);
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}


}
