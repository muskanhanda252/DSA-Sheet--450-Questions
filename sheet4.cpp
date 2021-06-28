#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c0=0,c1=0,c2=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n;i++)
    {
        cin>>arr[i];
        switch (arr[i]){
            case 0:
            c0++;
            break;

            case 1:
            c1++;
            break;

            case 2:
            c2++;
            break;
        }

    }
        i=0;
        while (c0 > 0) {
        arr[i++] = 0;
        c0--;
    }

    // Then all the 1s
    while (c1 > 0) {
        arr[i++] = 1;
        c1--;
    }

    // Finally all the 2s
    while (c2 > 0) {
        arr[i++] = 2;
        c2--;
    }
    for(i=0;i<n;i++)
    {
     cout<<arr[i]<<" ";
    }
    return 0;
    }
