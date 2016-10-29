#include <iostream>

using namespace std;


int main(){
	
	int a[4];
	int *p;

	p = a;
    *p = 10;

    p++;
    *p = 20;


    p = &a[2];
    *p = 30;

    p = (p + 1);
    *p = 40;


	for(int i = 0; i < 4; i++){
		cout << a[i] << " ";
	}

return 0;
}

