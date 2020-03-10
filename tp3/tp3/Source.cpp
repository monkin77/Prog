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

double squareRoot(double number, double delta, double maxIter) {
	double rq = 1;
	int n = 1;
	double rqn;
	double diff = abs( number - pow(rq, 2) ) ;
	while (diff > delta && n < maxIter) {
		rqn = ((rq + number) / rq) / 2;
		rq = rqn;
		diff = abs(number - pow(rq, 2)) ;
		n++;
		cout << rqn << endl;
}
	return rqn;
}

int main() {
	/* ex 1
	double x1, y1, x2, y2, x3, y3;
	cout << "Insert: x1 y1 x2 y2 x3 y3" << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double result = area(x1, y1, x2, y2, x3, y3);
	cout << result << endl;
	*/
	double number, delta, maxIter;
	cout << "Insert: number delta maxIter" << endl;
	cin >> number >> delta >> maxIter;
	double result = squareRoot(number, delta, maxIter);
	cout << result << endl;



	return 0;
}