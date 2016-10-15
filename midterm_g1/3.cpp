#include <iostream>
 
using namespace std;


double power(double a, int n){
	double s = 1;
	
	for(int i = 0; i < abs(n); i++){
		s *= a;
	}

	if(n > 0) return s;
	else return 1.0 / s;
}



int main(){

    double a;
	int n;
	cin >> a >> n;

	cout << power(a, n);

return 0;
}




