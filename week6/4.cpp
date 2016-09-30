#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	//1+2+3+4+5+6	
	int s = 0;
	while(n > 0){
		s += n % 10;
		n /= 10;
	}

	cout << s;


return 0;
}

