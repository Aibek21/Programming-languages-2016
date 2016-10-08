#include <iostream>

using namespace std;

int main(){
	
	int A[2][2];
	A[0][0] = 1;
	A[0][1] = 2;
	A[1][0] = 4;
	A[1][1] = 3;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << A[i][j] <<" ";
		}
		cout << endl;
	}


return 0;
}                  