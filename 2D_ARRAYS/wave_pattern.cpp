/* Ye program sare elements ko 2D matrix me wave like pattern ki tarah print karega 
like jab even index columns ayenge like 0,2,4 to hum top to bottom jayenge or odd index ke liye ulta

ek normal matrix serial wise numbers ka aisa program banega
1 4 7 8 5 2 3 6 9 

a[0][0] = 1    a[0][1] = 2    a[0][2] = 3
a[1][0] = 4    a[1][1] = 5    a[1][2] = 6
a[2][0] = 7    a[2][1] = 8    a[2][2] = 9

*/


#include <iostream>
using namespace std;

int main() 
{
  
  // ek normal array ko input karvate hai pehle
  
  int a[100][100];
  int m,n;
  cin >> m >> n;
  
  int val = 1;
  
  for(int i=0; i<=m; i++){
    for(int j=0; j<=n; j++){
      a[i][j] = val;
      val = val + 1;
      
      cout << a[i][j] << " ";
      
    }
    cout << endl;
  }
  
  // for wave print
  
  for(int j=0; j<n; j++){
      if(j%2 ==0){
          
          // even column - top down
          for(int i=0; i<m; i++){
              cout << a[i][j] << " ";
          }
      }
      else{
          // bottom up 
          for(int i=m-1; i>=0; i--){
              cout << a[i][j] << " ";
          }
      }

  }
   
   return 0;
}
