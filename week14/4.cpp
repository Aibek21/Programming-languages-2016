#include <iostream>     
#include <algorithm>
#include <vector>


using namespace std;


int main () {

	int a[4] = {5, -1, -1, 0};

	int *p;

	p = find(a, a+4, -1);

	if(p != a+4){
		cout << "found value = " << p;
	}else {
		cout << "not found";
	}




return 0;
}