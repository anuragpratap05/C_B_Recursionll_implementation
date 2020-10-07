# C_B_Recursionll_implementation
#include<bits/stdc++.h>
using namespace std;

int alloc(int a[],int i,int j, int n, int k , int op[])
{
    if(i==n)
    return j;
    
    if(a[i]==k)
    {
        op[j]=i;
        return alloc(a,i+1,j+1,n,k,op);
    }
    else
    {
    return alloc(a,i+1,j,n,k,op);
    }
    
    //return j;
    
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
    int op[100];
    int c=alloc(a,0,0,n,k,op);
    for(int i=0;i<c;i++)
    {
        cout<<op[i]<<endl;
    }
    
}
