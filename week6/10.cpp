#include <iostream>

using namespace std;


double my_pow(double a, int n){
	double result = 1;
	for(int i = 1; i <= n; i++){
		result *= a;
	}

	return result;
}




int main(){	

	double a;
	int n;
	
	cin >> a >> n;

	double r = my_pow(a, n);

	cout << r;

		

return 0;
}



