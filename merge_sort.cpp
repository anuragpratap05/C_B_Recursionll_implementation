# C_B_Recursionll_implementation
#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int si, int mid,int ei)
{
    
    int i =si;
    int j=mid;
    int k=0;
    int temp[ei+1];
    while(i<mid && j<=ei)
       {
            if(a[i]<a[j])
            {
                temp[k]=a[i];
                i++;
                k++;
                
            }
            else
            {
                temp[k]=a[j];
                j++;
                k++;
            }
            
        }
    
    
    while(i<mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }
    
    while(j<=ei)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    int x=0;
    for(int i=0;i<=ei;i++)
    {
        a[i]=temp[x];
        x++;
    }
}

void mergesort(int a[], int l, int r )
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,0,mid);
        mergesort(a,mid+1,r);
        merge(a,0,mid+1,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    mergesort(a,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
