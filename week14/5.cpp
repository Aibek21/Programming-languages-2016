#include <iostream>     
#include <algorithm>
#include <vector>


using namespace std;


int main () {
	
	vector<int> v;
	v.push_back(5);
	v.push_back(10);
	v.push_back(-2);
	v.push_back(0);
	
	vector<int>::iterator it;

	it = find(v.begin(), v.end(), -2);

	if(it != v.end()){
		cout << "found value = "<<*it;
	}
	else {
		cout << "not found";
	}





return 0;
}