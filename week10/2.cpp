#include <iostream>

using namespace std;


int main(){
	
	int num1, num2;

	int *p;

	p = &num1;
    *p = 10;

    p = &num2;
    *p = 20;

    cout << num1 << " " <<num2;

return 0;
}

