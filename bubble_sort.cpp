#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main() {
    // Write C++ code here
    int arr[]={8,2,6,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"________________________________"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    

    return 0;
}
