#include <iostream>

using namespace std;


int factorial(int n){
	int result = 1; //local variable
	for(int i = 1; i <= n; i++){
		result *= i;
	}

	return result;
}




int main(){	

	int n; //local variable
	
	cin >> n;

	int r = factorial(n);  //local variable

	cout << r;

		

return 0;
}



