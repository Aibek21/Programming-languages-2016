#include <iostream>

using namespace std;


int main(){

	int a = 10;
	
	int *point;

	point = &a;

	cout << &a << "\n" << point << "\n" << a << "\n" << *point;


return 0;
}

