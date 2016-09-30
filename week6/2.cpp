#include <iostream>

using namespace std;

int main(){

	int i = 0, n;
	cin >> n;
	
	int s = 0;
	while(i <= n){
		s += i;
		i++;
	}

	cout << s;


return 0;
}

