#include <bits/stdc++.h>
using namespace std;


void Get_Matrice (int x , int y , int matrix[10][10])
{
    for (int i =0 ; i < x ; i++)
    {
        for(int j = 0 ; j < y ; j++)
        {
            cin>>matrix[i][j] ;
        }
    }
}
void Print_matrice (int x, int y , int matrix[10][10])
{
    for (int i =0 ; i < x ; i++)
    {
        for(int j = 0 ; j < y ; j++)
        {
            cout<<matrix[i][j]<<" " ;
        }
        cout<<"\n" ;
    }
} 
void Sum_matrice ( int x , int y , int m , int  n , int matrix_a[10][10] , int matrix_b[10][10] )
{
    
    for ( int i = 0 ; i<x ; i++)
    {
        for(int j = 0 ; j < y ; j++)
        {
            matrix_a[i][j] = matrix_a[i][j] + matrix_b[i][j] ;  
        }
    }
    
}
void Move (int x , int y , int m , int n , int matrix_a[10][10], int matrix_b[10][10])
{
    for (int i =0 ; i < x ; i++)
    {
        for(int j = 0 ; j < y ; j++)
        {
            matrix_a[i][j] = matrix_b[i][j] ; 
        }
    }
}
void Subtract_matrice ( int x , int y ,int m , int n , int matrix_a[10][10] , int matrix_b[10][10])
{
    
    for ( int i = 0 ; i<x ; i++)
    {
        for(int j = 0 ; j < y ; j++)
        {
            matrix_a[i][j] = matrix_a[i][j] - matrix_b[i][j] ;  
        }
    }
    
}
void Multiply_matrice (int a , int x , int y , int matrix_a[10][10])
{
    for ( int i = 0 ; i<x ; i++)
    {
        for(int j = 0 ; j < y ; j++)
        {
            matrix_a[i][j] = a * matrix_a[i][j]  ;
        }
    }

}
void Multiply_2matrices (int x , int y , int m , int n , int matrix_a[10][10] , int matrix_b[10][10] )
{
    int matrix_j[10][10] ; 

    for(int i = 0; i < x; i++)  
    {
        for( int j = 0; j < n ; j++)
        {
            matrix_j[i][j] = 0 ;
            for(int k = 0; k < m; k++)
            {
               matrix_j[i][j] += matrix_a[i][k] * matrix_b[k][j] ;    
            }
                
        }
    
    }
    Move(x , n, x , n , matrix_a , matrix_j) ; 
    

}
int determinant( int matrix[10][10], int n) {
   int det = 0;
   int submatrix[10][10];
   if (n == 2)
   return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatrix[subi][subj] = matrix[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * matrix[0][x] * determinant( submatrix, n - 1 )); 
      }
   }
   return det;
}
void Making_A_Zero_Matrice(int matrix_a[10][10])
{
    for (int i =0 ; i < 10 ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            matrix_a[i][j] = 0  ; 
        }
    }
}


int main()
{   
    
    int o ;
    int x = 10 ; 
    int y = 10 ;
    int m = 10 ; 
    int n = 10 ; 
    int a , k ;
    int matrix_a [10][10] ;
    int matrix_b [10][10] ;
    Making_A_Zero_Matrice(matrix_a) ; // Making_A_Zero_Matrice kardan khoone haye Matrice A dar aval code 
    Making_A_Zero_Matrice(matrix_b) ; // Making_A_Zero_Matrice kardan khoone haye Matrice B dar aval code 
    int f = 0 ; 
    int io = 0 ; 
    if (io==0)
    {
        cout<<"Hello My Dear Friend \n Don't Try Char Inputs please , it would be a bad idea , ty <3 \n " ; 
        io = 1 ; 
    }
    
    menu :
    if (f==0)
    {
        // menu va salam avalie  :) 
        cout<<"menu  : \n 1- Input Matrice A \n 2- Input Matrice B \n " ;    
        cout<<"3- Move B be A \n 4- Move B be A \n 5- Multiply 2 Matrices and store the value to Matrice A \n 6- Sum of 2 Matrices and Store the value to Matrice A  \n 7- Divide 2 Matrices (not working) \n 8- subtract 2 Matrices \n 9- Multiply a number in Matrice A \n 10- Calculate determinant of Matrice A \n 11- Calculate determinant of B \n 12- Print Matrice A \n 13- Print Matrice B \n " ;  
    }
   while (true) 
   {

    cout<<"Please type the desired Operations [1 , 13] \n" ;
    if(!(cin>>o)) // agar char vared shod error bede 
    {   
        cin.clear(); 
        system("cls"); // pak kardan safhe 
        cout <<"I Told You \n JUST USE NUMBERS 0_0 \n";
        string ignoreLine;
        getline(cin, ignoreLine);
        goto menu ;
        continue;

    }
    switch (o)   
    {
    case 1: // Daryaft Matrice A 
        cout<<"input the height and width of Matrice <<A>> \n EG : \n 2 3  \n" ; 
        cout<<"  0 0 0\n  0 0 0  \n" ;
        cin>>x>>y ; 
        Get_Matrice(x,y,matrix_a);
            break;

    case 2 : // Daryaft Matrice B
        cout<<"input the height and width of Matrice <<B>> \n EG : \n 2 3 \n" ; 
        cout<<"  0 0 0\n  0 0 0  \n" ;
        cin>>m>>n ; 
        Get_Matrice(m,n,matrix_b);
            break ; 

    case 4 : // Move B be A 
        x = m ; 
        y = n ; 
        Move(x, y , m , n , matrix_a ,matrix_b) ;
        cout<<"Moved B to A  \n" ;

            break ; 
            
    case 3 : // Move A be B 
        m = x ; 
        n = y ;
        Move(m , n , x , y , matrix_b , matrix_a);
        cout<<"Moved A to B \n";
            break ; 
    
    case 5 : // Multiply_matrice 2 Matrice 

    if ( y==m )
    {
        Multiply_2matrices(x , y , m ,n , matrix_a , matrix_b);
        cout<<"Multiplied matrices A and B \n" ;
        y = n ;
    }
    else 
    {
        cout<<"Can't Multiply Two Matrices \n" ; 
    }
        break ; 
    
    case 6 : // Jamme 2 Matrice 
        
        if (x == m && y == n )
        {
            Sum_matrice(x , y , m , n , matrix_a, matrix_b);
            cout<<"Calculated sum of two matrices \n";
        }
        else 
        {
            cout<<"Can't Calculate Sum Of Two Matrices\n " ;
        }
            break; 
    
    case 8 : // Tafrigh 2 Matrice 
        
        if (x == m && y == n )
        {
            Subtract_matrice(x , y , m , n ,matrix_a ,matrix_b) ;
            cout<<"Subtracted Two matrices\n";
        }
        else 
        {
            cout<<"Can't Subtract Two Matrices \n " ;
        }
            break; 

    case 7 : // gharar bood taghsim bashe vali khob in case kar nmikone :))) 
        cout<<"Not Working  \n " ; 
            break ; 

    case 9 : // Multiply_matrice adad "a" dar Matrice A 
        cout<<"Input the Desired Number \n " ;
        cin>>a;
        Multiply_matrice(a , x , y , matrix_a) ;
        cout<<"Done ";
            break; 

    case 10 : // mohasebe determinan Matrice A 
        
        k = x ; 
        if (x==y)
        {
            cout<<determinant(matrix_a , k )<<"\n"; 
        } 
        else 
        {
            cout<<"Can't Calculate Determinant of The Matrice A\n  " ; 
        }
        
            break ; 
        
    case 11 : // mohasebe determinan Matrice B 
        k = m ;
        if (m==n)
        {
            cout<<determinant(matrix_b , k )<<"\n"; 
        } 
        else 
        {
            cout<<"Can't Calculate Determinant of The Matrice B \n" ; 
        }
            break ;

    case 12 : // chap Matrice A 
        Print_matrice(x,y,matrix_a) ; 
            break ; 
    case 13 : // chap Matrice B 
        Print_matrice(m,n,matrix_b) ; 
            break ; 

    default: // error bede age adad to baze [1 , 13 ] nabood 
        cout<<"Input Out Of Range.\n" ;
            break;
    }

   }
    return 0 ;    
}





