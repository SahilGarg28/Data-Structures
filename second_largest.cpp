#include <iostream>

using namespace std;

int secondlargest(int arr[],int n)
{
   int res=-1,largest=0;
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[largest])
       {
           res=largest;
           largest=i;
       }
       else if(arr[i]<arr[largest])
       {
         if(res==-1||arr[i]>arr[res])  
         {
             res=i;
         }
       }
   }
   return res;
}

int main()
{
    int arr[]={18,8,0,0,15,0};
    cout<<secondlargest(arr,6);

    return 0;
}
