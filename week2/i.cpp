#include <iostream>
#include <string>

using namespace std;

int main(){
		
	string first_name, last_name;
	
	cout << "Enter your fist name:\n";
	cin >> first_name;

	cout << "Enter your last name:\n";
	cin >> last_name;


	string s = "Hello " + first_name + " " + last_name + ".";

	cout << s;


return 0;
}
