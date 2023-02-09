// Find GCD ( greatest common divisor ) 
#include <iostream>
using namespace std;

int main()
{
    long long int a ;
    long long int b ; 
    cin>>a>>b;
    long long int max ;
    long long int min ;
    int flag = 1 ;
    if ( a > b )
    {
        max = a ;
        min = b ;
    } 
    else 
    {
        min = a  ;
        max = b  ;
    }
    for (int i = 1 ; i <= min ; i++ )
    {
        if (max%i==0 && min%i==0)
        {
            flag = i ;
        }
    }
    cout<<flag;


    return 0 ;
}
