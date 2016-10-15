#include <iostream>
 
using namespace std;



int main(){


	int m,n,k;
	cin >> n >> m;
	int A[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}

	cin >> k;

	int s, row = 0;
	bool ok = false;

	for(int i = 0; i < n; i++){
		s = 0;
		for(int j = 0; j < m; j++){
			if(A[i][j] == 0) ++s;
			else s = 0;

			if(s == k){
				row = i + 1;
				ok = true;
				break;	
			}	
		}
		if(ok) break;
	}


	cout << row;


return 0;
}




