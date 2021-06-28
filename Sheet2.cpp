#include<bits/stdc++.h>
using namespace std;

int min(int arr[], int n)
{
    int min=0;
    for(int i=0;i<n;i++)
    {
    if(arr[min]>arr[i])
    min=i;
    }
    cout<<"Min Element "<<arr[min]<<endl;
    return 0;
}
int max(int arr[], int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
    if(arr[max]<arr[i])
    max=i;
    }
    cout<<"Max Element "<<arr[max]<<endl;
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    min(arr,n);
    max(arr,n);
    return 0;
}
