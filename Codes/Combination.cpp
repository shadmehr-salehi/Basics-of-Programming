// Code to Calculate Combination recursively 
#include <bits/stdc++.h>
using namespace std;

int Ch(int n,int k)
{
    if (k == 0 )
    {
        return 1 ; 
    }
    else if (k > n )
    {
        return 0 ; 
    }
    return Ch(n - 1, k) + Ch(n - 1, k - 1) ; 

}


int main()
{
    int n ; 
    int k ;
    cin>>n ; 
    cin>>k ;
    cout<<Ch(n,k) ; 

    return 0 ;    
}
