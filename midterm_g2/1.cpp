#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;	
	int i = 1;
	int s = 1;
	while(i <= n){
		s *= i;
		i++;		
	}	    


	cout << s;


return 0;	
}
