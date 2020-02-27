#include <iostream>		
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

double distance(double a1, double a2, double b1, double b2) {
	double  dis1 = pow(a1 - b1, 2);
	double dis2 = pow(a2 - b2, 2);
	return sqrt(dis1 + dis2);
}

int main() {
/*
	char x;
	cin >> x;
	cout << int(x) << endl;
*/
/*
	int a, b, c;
	cout << "Please input 3 integer numbers" << endl;
	cout << "A?" << endl;
	cin >> a;
	cout << "B?" << endl;
	cin >> b;
	cout << "C?" << endl;
	cin >> c;
	double mean = (a + b + c) / 3;
	cout << "mean = " << mean << endl;
	cout << "A-mean = " << a - mean << endl;
	cout << "B-mean = " << b - mean << endl;
	cout << "C-mean =" << c - mean << endl;
*/
/*	double d, r;
	cout << "Density?" << endl;
	cin >> d;
	cout << "Radius?" << endl;
	cin >> r;
	double M = (4 / 3) *  d * r * po(M_PI,3);
	cout << "The mass is: " << M;
*/
/*	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	double x = (c * e - b * f) / (a * e - b * d);
	double y = (a * f - c * d) / (a * e - b * d);
	cout << "x: " << x << " y: " << y << endl;
*/
	int time11, time12, time13, time21, time22, time23;
	int day = 0;
	char sep1, sep2;
	cout << "Time1 (hours minutes seconds)?" << endl;
	cin >> time11 >> sep1 >> time12 >> sep2 >> time13;
	cout << "Time2 (hours minutes seconds)?" << endl;
	cin >> time21 >> sep1 >> time22 >> sep2 >> time23;
	int time1 = time11 + time21;
	int time2 = time12 + time22;
	int time3 = time13 + time23;
	if (time3 >= 60) {
		time3 -= 60;
		time2 += 1;
	}
	if (time2 >= 60) {
		time2 -= 60;
		time1 += 1;
	}
	if (time1 >= 24) {
		time1 -= 24;
		day += 1;
	}
	cout << day << " day " << time1 << " hours " << time2 << " minutes " << time3 << " seconds " << endl;

/*	double a1, a2, b1,b2, c1,c2;
	cout << "a1 a2 b1 b2 c1 c2" << endl;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	double ab = distance(a1, a2, b1, b2);
	double ac = distance(a1, a2, c1, c2);
	double bc = distance(b1, b2, c1, c2);
	double s = (ab + ac + bc) / 2;
	double area = sqrt(s * (s - ab) * (s - ac) * (s - bc));
	cout << "Area is: " << area;
*/
	return 0;
}


