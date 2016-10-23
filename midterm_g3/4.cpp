#include <iostream>
#include <cmath>

using namespace std;


int main(){

	int a, b;
	cin >> a >> b;

	int s = 0;

	for(int i = a; i <= b; i++){
		++s;
	}

	int A[s];

	for(int i = 0; i < s; i++){
		A[i] = a*a;
		a++;
	}

	for(int i = 0; i < s; i++){
		cout << A[i] << " "; 
	}



return 0;
}
