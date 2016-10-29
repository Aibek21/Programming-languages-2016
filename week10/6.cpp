#include <iostream>

using namespace std;

char toUpper(char s){
	int code = (int)s;
	if(code >= 97 && code <= 122)
		code -= 32;

	return char(code);
}


char toLower(char s){
	int code = (int)s;
	if(code >= 65 && code <= 90)
		code += 32;

	return char(code);
}




int main(){

	string s;

	s = "Hello World!";


	cout << s.length() <<"\n";

	for(int i = 0; i < s.length(); i++){
		cout << toUpper(s[i]);		
	}	


return 0;    
}

