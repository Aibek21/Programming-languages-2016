#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) A[i][j] = 1;
			else if(i > j) A[i][j] = 3;
			else A[i][j] = 2;			
		}
	}



	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}


return 0;
}                  