#include <iostream>

using namespace std;


int main(){

	bool ok;


	int a;
	
	cin >> a;

	if(a % 2 == 0){
		ok = true;
	} else {
		ok = false;
	}



	if(ok == true) {
		cout << "EVEN";	
	} else {
		cout << "ODD";
	}



return 0;
}

