#include <iostream>
#include <vector>
#include "student.h"
          
using namespace std;


int main(){
	
	freopen("students.txt", "r", stdin);

	vector<Student> v;

	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		Student s;
		cin >> s.name >> s.age >> s.gpa;
		v.push_back(s);		
	}

	bool sw = true;

	while(sw){
		sw = false;
		for(int i = 0; i < v.size() - 1; i++){
			if(v[i].gpa > v[i+1].gpa){
				swap(v[i], v[i+1]);
				sw = true;
			} 			
		}
	}


	for(int i = 0; i < v.size(); i++)
		cout << v[i].name <<" "<<v[i].age << " "<<v[i].gpa <<"\n";
	



	



return 0;    
}


