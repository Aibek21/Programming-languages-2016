#include <iostream>
#include <cmath>

using namespace std;


int MinDivsor(int n){
	for(int i = 2; i < sqrt(n); i++){
		if(n % i == 0) return i;
	}
	return n;                       
}




int main(){
	int n;
	cin >> n;	
	
	cout << MinDivsor(n);

return 0;	
}
