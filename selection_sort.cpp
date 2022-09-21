#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main() {
    // Write C++ code here
    int arr[]={8,2,6,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    

    return 0;
}
