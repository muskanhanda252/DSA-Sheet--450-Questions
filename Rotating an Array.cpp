//Reversal Algo for Array Roatation:
#include<bits/stdc++.h>
using namespace std;
    void ReverseArray(int arr[],int start, int end)
    {
        while(start<end)
        {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
        }
    }
     void LeftRotate(int arr[],int d, int n)
     {
     ReverseArray(arr,0,d-1);
     ReverseArray(arr,d,n-1);
     ReverseArray(arr,0,n-1);
     }

     void PrintArray(int arr[],int n)
     {
       for(int i=0;i<n;i++)
     {
     cout<<arr[i]<<" ";
     }
     }

int main()
{
int n,d;
cin>>n;
cin>>d;
int arr[n];
    for(int i=0; i<n;i++)
    {
     cin>>arr[i];
    }
LeftRotate(arr,n,d);
PrintArray(arr,n);
return 0;
}
