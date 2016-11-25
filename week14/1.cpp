#include <iostream>     
#include <algorithm>
#include <vector>


using namespace std;



int main () {

	int a[4] = {5, 10, -1, 0};


	sort(a, a + 4);


	for(int i = 0; i < 4; i++){
		cout << a[i] << " ";
	}	










return 0;
}