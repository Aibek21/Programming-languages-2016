#include <iostream>
#include "student.h"
          
using namespace std;


int main(){
	
	freopen("students.txt", "r", stdin);
	
	int n;
	cin >> n;

	Student s[n];
	
	readAllStudents(s, n);

	sortStudentsByGpa(s, n, 0);

	printLine();

	findStudentWithNameStartsWith(s, n, 'A');


	printLine();

	findStudentByName(s, n, "Sedi");
	
	printLine();

	findAllStudentsGpaAbove(s, n, 3.9);
	

	printLine();
	printAllStudents(s, n);


return 0;    
}


