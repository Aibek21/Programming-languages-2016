#include <iostream>
#include <cmath>


using namespace std;



struct Student{
	string name;
	int score;
};


int main(){
	
	int n;
	cin >> n;

	Student s[n];

	for(int i = 0; i < n; i++){
		cin >> s[i].name >> s[i].score;
	}


    for(int i = 0; i < n; i++){
    	for(int j = i + 1; j < n; j++){
    		if(s[i].score < s[j].score){
    			swap(s[i], s[j]);
    		}
    	}
    }                  


	for(int i = 0; i < n; i++){
		cout << s[i].name << "\n";
	}


return 0;
}