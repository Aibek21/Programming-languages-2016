#include <iostream>
 
using namespace std;



int main(){


	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	int maxi = a[0];
	int mini = a[0];
	int index_mini = 0;
	int index_maxi = 0;

	for(int i = 0; i < n; i++){
		if(a[i] > maxi){
			maxi = a[i];
			index_maxi = i;
		}
		if(a[i] < mini){
			mini = a[i];
			index_mini = i;
		}
	}

	swap(a[index_mini], a[index_maxi]);



	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}	







return 0;
}




