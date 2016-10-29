#include <iostream>
#include <vector>
          
using namespace std;

struct Student{
	string name;
	int age;
	double gpa;
};



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


	cout << v.size() << "\n";


	for(int i = 0; i < v.size(); i++){
		cout << v[i].name <<" "<< v[i].age << " " << v[i].gpa <<"\n";
	}

	



return 0;    
}


