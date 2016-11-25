#include <iostream>     
#include <algorithm>
#include <vector>


using namespace std;


int main () {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	vector<int> v;
	
	cin >> n;

	while(n != 0){
		v.push_back(n);
		cin >> n;
	}


	sort(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}

	

	




return 0;
}