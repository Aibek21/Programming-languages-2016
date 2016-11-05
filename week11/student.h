using namespace std;

struct Student{
	string name;
	int age;
	double gpa;
};


void readAllStudents(Student *s, int n){

	for(int i = 0; i < n; i++){
		cin >> s[i].name >> s[i].age >> s[i].gpa;
	}
		
}

void printStudent(Student s){
	cout << s.name << " "<< s.age <<" "<<s.gpa<< endl; 
}


void printAllStudents(Student *s, int n){

	for(int i = 0; i < n; i++){
		printStudent(s[i]);
	}
	
}

void sortStudentsByGpa(Student *s, int n, int r){
	bool sw = true;
	while(sw){
		sw = false;
		for(int i = 0; i < n -1; i++){
			if(r == 1){
				if(s[i].gpa > s[i+1].gpa){
					swap(s[i], s[i+1]);
					sw = true;
				}
			} else if(r == 0){
				if(s[i].gpa < s[i+1].gpa){
					swap(s[i], s[i+1]);
					sw = true;
				}			
			}
		}
	}

}


void findStudentByName(Student *s, int n, string name){

	for(int i = 0; i < n; i++){
		if(s[i].name == name){
			printStudent(s[i]);
		}                   
	}

}




void findAllStudentsGpaAbove(Student *s, int n, double gpa){
	for(int i = 0; i < n; i++){
		if(s[i].gpa >= gpa){
			printStudent(s[i]);	
		}
	}
}


char toLower(char c){
	int code = (int) c;
	if(code >= 65 && code <= 90){
		code += 32;
	} else if(code >= 97 && code <= 122){
		return c;		
	}

	return char(code);
}


void printLine(){
	for(int i = 0; i < 50; i++){
		cout << "=";
	}
	cout << "\n\n";
}


void findStudentWithNameStartsWith(Student *s, int n, char c){
	for(int i = 0; i < n; i++){
	
		char studentNameStarts = toLower(s[i].name[0]);
		char ss = toLower(c);

	 
		if(studentNameStarts == ss){
			printStudent(s[i]);			
		}
	}
}







