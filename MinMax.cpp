#include<bits/stdc++.h>
using namespace std;
void MinMax(int arr[],int n)
{
    int min=0,max=0;
    if(n==1)
    min=max=arr[0];
    else{
        if(arr[0]<arr[1])
        {
        min=arr[0];
        max=arr[1];
        }
        else
        {
        min=arr[1];
        max=arr[0];
        }
        for(int i=0;i<n;i++)
        {
        if(min>arr[i])
        min=arr[i];
        else if(max<arr[i])
        max=arr[i];
        }
        cout<<"Max Element"<<" "<<max<<endl;
        cout<<"Min Element"<<" "<<min<<endl;
        }
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
MinMax(arr,n);
return 0;
}
