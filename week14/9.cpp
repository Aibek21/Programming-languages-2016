#include <iostream>     
#include <algorithm>
#include <vector>
#include <cmath>


using namespace std;


struct point{
	double x;
	double y;
	
};


double dist(double x, double y){
	return sqrt(x*x + y*y);
}


int main () {
	int n;

	cin >> n;

	point p[n];

	for(int i = 0; i < n; i++){
		cin >> p[i].x >> p[i].y;
	}


	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			double d1 = dist(p[i].x, p[i].y);
			double d2 = dist(p[j].x, p[j].y);
			if(d1 > d2){
				swap(p[i], p[j]);
			}
		}
	}


	for(int i = 0; i < n; i++){
		cout << p[i].x << " "<< p[i].y << endl;
	}





	


	




return 0;
}