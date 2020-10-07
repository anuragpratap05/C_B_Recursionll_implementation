# C_B_Recursionll_implementation
#include<bits/stdc++.h>
using namespace std;

int search(int a[],int si,int ei, int k)
{
    if(ei>si)
    {
    int mid=(si+ei)/2;
    if(k==a[mid])
    return mid+1;
    
    else if(k>a[mid])
    search(a,mid+1,ei,k);
    
    else
    search(a,si,mid,k);
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
  
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<search(a,0,n,k)<<endl;
  
}
