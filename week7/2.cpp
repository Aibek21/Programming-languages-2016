#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int a[n];	

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int l = 0; l < n; l++){
		a[l] = a[l]*a[l];
	}


	for(int k = 0; k < n; k++){
		cout << a[k] << " ";
	}
	           


return 0;
}