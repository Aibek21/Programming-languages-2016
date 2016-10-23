#include <iostream>
 
using namespace std;
 
int main(){
   
    int n;
    cin >> n;
 
    int a[n][n];
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){   
            cin >> a[i][j];
        }
    }
   
   
    for(int i = 0; i < n; i++)
    	swap(a[i][i], a[n-1-i][i]);
 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
 
   
 
    return 0;
}