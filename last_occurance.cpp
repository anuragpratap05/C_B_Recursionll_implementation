# C_B_Recursionll_implementation
#include<bits/stdc++.h>
using namespace std;

int power(int a[], int n , int k)
{
    if(n==0 or n==1)
    return -1;
    
    //if(a[0]==k)
    //return 0;
    
    int sa=power(a+1,n-1,k);
    if(sa==-1)
    {
        if(a[0]==k)
        {
            return 0;
        }
        else
        return -1;
    }
    //if(a[0]==k)
    //return 0;
    return sa+1;
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
    cout<<power(a,n,k)<<endl;
  
}
