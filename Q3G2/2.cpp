#include <iostream>

using namespace std;

int main(){

  int n, m;
  cin >> n >> m;

  int a[n][m];

  for (int i = 0; i < n; ++i){
    for (int j = 0; j < m; ++j){
      cin >> a[i][j];
    }
  }



  int maxi = a[0][0];
  for (int i = 0; i < n; ++i){
    for (int j = 0; j < m; ++j){
      if(a[i][j] > maxi) maxi = a[i][j];
    }
  }

  for (int j = 0; j < m; ++j){
    for (int i = 0; i < n; ++i){
      if(a[i][j] == maxi){
        for (int k = 0; k < n; ++k){
          cout << a[k][j] << " ";
        }
        cout <<"\n";
        break;
      }
    }
  }




  
return 0;  
}