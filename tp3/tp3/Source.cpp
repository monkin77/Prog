#include <iostream>
#include <math.h>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
	return sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) );
}

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = distance(x1, y1, x2, y2);
	double b = distance(x1, y1, x3, y3);
	double c = distance(x2, y2, x3, y3);
	double s = (a + b + c) / 2;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}


int main() {
	double x1, y1, x2, y2, x3, y3;
	cout << "Insert: x1 y1 x2 y2 x3 y3" << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double result = area(x1, y1, x2, y2, x3, y3);
	cout << result << endl;
}