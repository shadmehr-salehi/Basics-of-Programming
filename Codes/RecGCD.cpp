// Recursive Algorhitm to find GCD (greatest common divisor )

#include <bits/stdc++.h>
using namespace std;

int gcd (int a , int b )
{
    if (a%b==0 )
    {
        return b ;
    }
    return gcd (b,a%b) ;
}

int main()
{
    int a ; 
    int b ; 
    cin>>a ; 
    cin>>b ; 
    cout<<gcd(a,b) ; 



    return 0 ;    
}
