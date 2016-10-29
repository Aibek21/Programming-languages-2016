#include <iostream>

using namespace std;

bool isDigit(char s){

	int code = (int)s;
	if(code >= 48 && code <= 57) 
		return true;
	else 
		return false;
}



void Menu(){
	cout << "\nEnter next char or q for exit\n";
}


int main(){

	char s;
	
	cout << "Enter any char\n";

	while(s != 'q'){
		
		cin >> s;

		if(isDigit(s) == true)
			cout << "You entered number\n";
		else 
			cout << "Not number\n";

		Menu();

	}   

	


return 0;    
}

