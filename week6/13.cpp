#include <iostream>

using namespace std;

void hi(){
	cout << "hello";
}

int sum(int a, int b){
	return a+b;
}

int F(int n){
	int s = 1;
	for(int i = 1; i <= n; i++){
	    s *= i;
	}
	return s;
}

int F_r(int n){
	if(n == 1) return 1;
	else return n * F_r(n - 1);
}

int sum_r(int n){
	if(n == 1) return 1;
	else return n + sum_r(n - 1);
}



char toUpper(char s){
	int code = (int) s;
	if(code >= 97 && code <= 122){
		code -= 32;
	} 
	return char(code);	
}

char toLower(char s){
	int code = (int) s;
	if(code >= 65 && code <= 90){
		code += 32;
	} 
	return char(code);	
}


int main(){

	char s;
	cin >> s;

	cout << toLower(s);

		

return 0;
}




