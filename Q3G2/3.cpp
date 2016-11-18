#include <iostream>

using namespace std;

struct Student
{ 
  string sname;
  string fname;
  double n1; 
  double n2; 
  double n3; 
};

int main(){
  double n;
  cin >> n;

  Student s[100];

  double avr1 = 0, avr2 = 0, avr3 = 0;

  for (int i = 0; i < n; ++i){
    cin >> s[i].sname >> s[i].fname >> s[i].n1 >> s[i].n2 >> s[i].n3;
    avr1 += s[i].n1;
    avr2 += s[i].n2;
    avr3 += s[i].n3;
  }


  cout << avr1 / n <<" "<<avr2/n<<" "<<avr3/n;
  
return 0;  
}