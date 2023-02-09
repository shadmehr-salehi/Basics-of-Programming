// Code to find out an input number is prime or not 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a ; 
    cin>>a ; 
    int flag = 0  ; 
    for ( int i = 2 ; i < a ; i++)
    {
        if (a%i == 0 )
        {
            flag = 1 ;
        
        }

    }
        if ( flag == 1 )
        {
            cout<<"Not Prime" ;
        }
        else
        {
            cout<<"Prime ! " ;
        }



    return 0 ;    
}
