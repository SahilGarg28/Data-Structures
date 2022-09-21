#include <iostream>
using namespace std;
void mergesort(int arr[],int brr[],int n1,int n2)
{
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(arr[i]<brr[j])
        {
            cout<<arr[i]<<endl;
            i++;
        }
        else
        {
            cout<<brr[j]<<endl;
            j++;
        }
    }
    while(i<n1)
    {
        cout<<arr[i++]<<endl;
    }
    while(j<n2)
    {
        cout<<brr[j++]<<endl;
    }
}
int main() {
    // Write C++ code here
    int arr[]={10,15,20,40};
    int brr[]={5,6,6,10,15};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(brr)/sizeof(brr[0]);
    mergesort(arr,brr,n1,n2);

    

    return 0;
}
