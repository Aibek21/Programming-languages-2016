#include <iostream>     
#include <algorithm>
#include <vector>


using namespace std;


struct point{
	double x;
	double y;
	
};


int main () {
	int n;

	cin >> n;

	point p[n];

	for(int i = 0; i < n; i++){
		cin >> p[i].x >> p[i].y;
	}


	double sum1 = 0, sum2 = 0;
	for(int i = 0; i < n; i++){
		sum1 += p[i].x;
		sum2 += p[i].y;
	}


	cout << sum1 / n <<" "<< sum2 / n;




	

	




return 0;
}