#include <iostream>

using namespace std;

int g = 30; // global variable

void doSomething(){
	int k = 10; // create local variable
	g = g + 10; // change global variable 
}


int main(){	


    doSomething();
	
	cout << g;

	//cout << k; //ERROR k was not declared in this scope, because k is local variable in doSomething() 

		

return 0;
}



