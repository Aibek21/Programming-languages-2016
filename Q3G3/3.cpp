#include <iostream>

using namespace std;


struct Student{
	string fname;
	string lname;
	double n1;
	double n2;
	double n3;
	double avr;
};

int main(){

	int n;
	cin >> n;

	Student s[101];

	double maxi;

	for(int i = 0; i < n; i++){
		cin >> s[i].fname >> s[i].lname >> s[i].n1 >> s[i].n2>> s[i].n3;
		s[i].avr = ( s[i].n1 + s[i].n2 + s[i].n3 )/3;   
		if(i == 0) maxi = s[i].avr;
		if(s[i].avr > maxi){
			maxi = s[i].avr;
		}
	}

    for(int i = 0; i < n; i++){
    	if(s[i].avr == maxi){
    		cout << s[i].fname <<" "<<s[i].lname <<"\n";
    	}
    }
	

return 0;
}