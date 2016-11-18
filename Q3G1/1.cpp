#include <iostream>
#include <cmath>


using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int x;
	cin >> x;

	int mini = abs(x-a[0]);
	int res = a[0];

	for(int i = 0; i < n; i++){
		if(abs(a[i] - x) < mini){
			mini = abs(a[i] - x);
			res = a[i]; 
		}
	}

	cout << res;


return 0;
}