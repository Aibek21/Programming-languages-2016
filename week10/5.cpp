#include <iostream>
#include <vector>

using namespace std;


int main(){
	
	vector<int> v;


	for(int i = 0; i < 10; i++)
		v.push_back(i);



	cout << v.size() << "\n";

	vector<int>::iterator vi;


	for(vi = v.begin(); vi != v.end(); vi++)
		cout << *vi << " ";




return 0;    
}

