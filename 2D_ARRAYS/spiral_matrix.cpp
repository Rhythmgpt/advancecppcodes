// ab hum matrix ko spiral tarreke se ghumayenge interview question hai ye

#include <iostream>
using namespace std;

    void spiralprint(int a[100][100], int m, int n){
        
        int startrow = 0;
        int startcol = 0;
        int endrow = m - 1;
        int endcol = n - 1;
        
        // ab print karenge
        while(startrow<=endrow && startcol<=endcol){
            
            // first row
            for(int i = startcol; i<=endcol; i++){
                cout << a[startrow][i] << " ";
            }
            startrow++;
            
            for(int i = startrow; i<=endrow; i++){
                cout << a[i][endcol] << " ";
            }
            endcol--;

        // bottom line
            if (startrow <= endrow) {
        for(int i = endcol; i>=startcol; i--){
            cout << a[endrow][i] << " ";
        }
            endrow--;
            }
            
        // start col
            if (startcol <= endcol) {
        for(int i = endrow; i>=startrow; i--){
            cout << a[i][startcol] << " ";
        }
        startcol++;
            }
        }
    }


int main() 
{
  
  int a[100][100];
  int m,n;
  cin >> m >> n;
  
  int val = 1;
  
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      a[i][j] = val;
      val = val + 1;
      
      cout << a[i][j] << " ";
      
    }
    cout << endl;
  }
  spiralprint(a,m,n);
  return 0;
}
