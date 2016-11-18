#include <iostream>

using namespace std;


int main(){

	int n;
	cin >> n;
	int a[1001];

	for(int i = 1; i <= n; i++){
		cin >> a[i]; 
	}

	int val, index;
	cin >> val >> index;


	for(int i = 1; i <= n; i++){
		if(i == index){
			cout << val <<" ";
		}
		cout << a[i] << " ";
	}


return 0;
}