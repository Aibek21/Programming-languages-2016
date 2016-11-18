#include <iostream>
#include <cmath>


using namespace std;

int main(){

	int n, m;
	cin >> n >> m;
	int a[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];	
		}
	}

	int mini = a[0][0];
	int mini_i = 0, mini_j = 0;
	int maxi = a[0][0];
	int maxi_i = 0, maxi_j = 0;


	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] > maxi){
				maxi = a[i][j];
				maxi_i = i;
				maxi_j = j;
			}
			if(a[i][j] < mini){
				mini = a[i][j];
				mini_i = i;
				mini_j = j;
			}
		}
	}



	cout << mini_i+1<<" "<< mini_j+1<< " "<<mini<<endl;  
	cout << maxi_i+1<<" "<< maxi_j+1<< " "<<maxi<<endl;  



return 0;
}