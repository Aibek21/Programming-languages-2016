#include <iostream>

using namespace std;

void toUpper(char *s){
	
	int code = (int)*s;
	if(code >= 97 && code <= 122)
		code -= 32;

	*s = char(code); 
}


int main(){

	string s;

	s = "Hello World!";


	for(int i = 0; i < s.length(); i++){
		toUpper(&s[i]);	
	}	

	for(int i = 0; i < s.length(); i++){
		cout << s[i];
	}	           



return 0;    
}

