#include <iostream>

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


	int mini, sum, index;

	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < m; j++){
			sum += a[i][j];			
		}
		if(i == 0) mini = sum;
		if(sum < mini){
			mini = sum;
			index = i;
		}
	}

	for(int j = 0; j < m; j++){
		cout << a[index][j] << " ";
	}

	

return 0;
}