#include <iostream>     
#include <algorithm>
#include <vector>


using namespace std;


int main () {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, a;
	cin >> n;	
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);	
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}

	




return 0;
}