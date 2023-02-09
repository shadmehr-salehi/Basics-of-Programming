// code to show where is fibonacci number is using "-" and "+" where "+" represents that the number is a fibonacci number 
/* 
EG: user input : 100 
Expected output : +++-+--+----+-------+------------+--------------------+---------------------------------+----------- 
*/ 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fib[110];
    fib[0] =1 ; 
    fib[1] = 1 ; 
    int dp[110] ;
    dp[0] = 1;
    dp[1] = 1 ;
    for (int i = 2 ; i <= 12  ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] ; 
        fib[i] = dp[i] ; 
    }
    int n , j=1  ; 
    cin>>n ;
    for (int i =1 ; i <= n ; i++ )
    {
        if (fib[j]==i)
        {
            cout<<"+";
            j++ ; 
        }
        else 
        {
            cout<<"-";
        }
    }   

    return 0 ;    
}
