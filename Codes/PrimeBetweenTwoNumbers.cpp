// Find Prime numbers between two given Numbers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a ;
    int b ;  
    cin>>a ; 
    cin>>b ; 
    int flag = 0 ; 
    int flag2 = 1 ;
    for ( int i = a+1 ; i<b ; i++)
    {
        for ( int z = 2 ; z < i ; z++)
        {
        if (i%z == 0 )
        {
            flag = 1  ; 
        }

        }
        if ( flag==0 && flag2==1)
        {
            cout<<i;
            flag2=0;
        }

        else if ( flag  == 0 && flag2== 0)
        {
            cout<<","<<i ;
            flag= 0 ;
        }
        flag = 0 ;
    }


    return 0 ;    
}

