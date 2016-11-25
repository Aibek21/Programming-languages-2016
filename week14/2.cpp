#include <iostream>     
#include <algorithm>
#include <vector>


using namespace std;


bool cmp(int a, int b){
	if(a < b) 
		return true;
	else 
		return false;
}



int main () {

	int a[4] = {5, 10, -1, 0};


	sort(a, a + 4, cmp);


	for(int i = 0; i < 4; i++){
		cout << a[i] << " ";
	}	




return 0;
}