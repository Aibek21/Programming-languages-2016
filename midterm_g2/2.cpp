#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;	
	int a;
	int i = 0;
	int s = 0;
	while(i < n){
		cin >> a;
		s += a;
		i++;
	}

	cout << s;

return 0;	
}
