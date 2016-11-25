#include <iostream>     
#include <algorithm>
#include <set>


using namespace std;


int main () {

	string s;
	cin >> s;


	set<char> l;


	for(int i = 0; i < s.length(); i++){
		if(isdigit(s[i])){
			l.insert(s[i]);
		}
	}

	for(set<char>::iterator si = l.begin(); si != l.end(); si++){
		cout << *si;
	}

return 0;
}