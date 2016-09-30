#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;
	
	bool ok;
	for(int i = 2; i <= n; i++){

		ok = true;
	
		for(int j = 2; j < i; j++){
			if(i % j == 0) ok = false;
		}
		if(ok == true) cout << i << " ";
	}


return 0;
}

