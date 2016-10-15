#include <iostream>
 
using namespace std;


int main(){


	int n;
	cin >> n;
	int a, s = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a == 0) s++; 
	}	

	cout << s;



return 0;
}




