#include <iostream>

using namespace std;

struct Student{
	string name;
	int age;
	double gpa;
};



int main(){
	
	Student s;

	s.name = "Dastan";
	s.age = 17;
	s.gpa = 4.0;




	cout << s.name << " "<<s.age << " "<<s.gpa;



return 0;    
}


