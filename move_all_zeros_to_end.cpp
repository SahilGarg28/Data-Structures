#include <iostream>

using namespace std;

void movezeros(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {   int temp=arr[i];
        arr[i]=arr[count];
        arr[count]=temp;
     
            count++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    int arr[]={10,8,0,0,12,0};
    movezeros(arr,6);

    return 0;
}
