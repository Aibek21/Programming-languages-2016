#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> A[i][j];
		}
	}

	bool ok = true;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				if(A[i][j] != A[j][i]){
					ok = false;	
					break;
				}
			}
		}
	}

	if(ok) cout << "yes";
	else cout << "no";





return 0;
}                  