// Code to find sum of digits
#include <iostream>
using namespace std; 

int main ()
{
    int a ;
    cin>>a ; 
    int sum = 0 ;
    while (a >=1)
    {
       sum += a%10 ;
       a = a/10 ; 
    }
 
cout<<sum ;
return 0  ;   
}
