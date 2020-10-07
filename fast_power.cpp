# C_B_Recursionll_implementation
#include<bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if(n==0)
    return 1;
    
    int ans=power(a,n/2);
    ans=ans*ans;
    
    if(n&1)
    return a*ans;
    else
    return ans;
    
}
int main()
{
    int a, n;
    cin>>a>>n;
    cout<<power(a,n);
}
