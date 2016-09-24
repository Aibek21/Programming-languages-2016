#include <iostream>

using namespace std;


int main(){
	int n, a;
	cin >>n;

	int counter = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a == 0) counter++; 
	}	


	cout << counter;
	
return 0;
}
