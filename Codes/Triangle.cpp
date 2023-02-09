// Draw Two Triangles 
/* 
EG : user input : 5 
Expected Outpu : 
**********
 ******** 
  ******  
   ****   
    **    
    *     
    **    
   ****   
  ******  
 ******** 
**********
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i ; j++){
            cout << ' ';
        }
        for(int j = 0; j < 2 * n - 2 * i; j++){
            cout << "*";
        }
        cout << '\n';
    }
    for(int i = 0; i <  n - 1; i++){
        cout << ' ';
    }
    cout << "*\n";
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < i ; j++){
            cout << ' ';
        }
        for(int j = 0; j < 2 * n - 2 * i; j++){
            cout << "*";
        }
        cout << '\n';
    }
}
