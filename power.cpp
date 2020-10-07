# C_B_Recursionll_implementation
#include<bits/stdc++.h>
using namespace std;

int power(int n, int k)
{
    if(k==1)
    return n;
    
    int sa=n*power(n,k-1);
    
    return sa;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<power(n,k)<<endl;
  
}
