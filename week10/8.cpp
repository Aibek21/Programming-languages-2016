#include <iostream>

using namespace std;


int main(){

	freopen("numbers.txt", "r", stdin);


	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++)
		cin >> a[i];


	//bubble sort 1
/*
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(a[j] > a[j+1])
				swap(a[j],a[j+1]);
		}
	}
*/



	//bubble sort 2

/*
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
*/



	//bubble sort 3

	bool swapped = true;

	while(swapped){
		swapped = false;

		for(int i = 0; i < n-1; i++){
			if(a[i] > a[i+1]){
				swap(a[i], a[i+1]);
				swapped = true;
			}
		}

	}
	                          

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}                           

	
		



return 0;    
}

