#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main() {
	/* int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if ((a * e == b * d)) {
		cout << "Impossible system" << endl;
	}
	else {
		int x = (c * e - b * f) / (a * e - b * d);
		int y = (a * f - c * d) / (a * e - b * d);
	}
	*/

/*	int a = 0;
	int min = 10000000000000;
	int max = -10000;
	int middle = 100000;

	for (int i = 0; i <= 2; i++) {
		cin >> a;
		if (a > max)
			max = a;
		if (a < min)
			min = a;
		if (a >= min && a <= max)
			middle = a;
		if (i == 2)
			cout << max << " " <<  middle << " " <<  min <<endl;
	}
*/
/*	int a, b, c;
	cin >> a >> b >> c;
	int max = 0;

	if (a < 0 || b < 0 || c < 0)
		cout << "Error, negative input" << endl;

	if (a >= b) {
		if (a >= c) {
			max = a;
		}
	}
	else if (b >= a) {
		if (b >= c) {
			max = b;
		}
	}
	else if (c >= a) {
		if (c >= b) {
			max = c;
		}
	}
		max = c;
	

	if (max == a)
		if (a > b + c)
			cout << "impossible" << endl;
		else
			cout << "Possible " << endl;
	else if (max == b)
		if (b > a + c)
			cout << "impossible" << endl;
		else
			cout << "Possible " << endl;
	else if (max == c)
		if (c > b + a)
			cout << "impossible" << endl;
		else
			cout << "Possible " << endl;
*/
/*	int long long a, b;
	cin >> a >> b;
	if (a + b > INT_MAX)
		cout << "sum overflow" << endl;
	else if (a + b < INT_MIN)
		cout << "sum underflow" << endl;
	else
		cout << a + b << endl;
*/
/*	int weight;
	int cost, ad;
	cin >> weight;
	if (weight <= 500)
		cost = 5;
	else if (weight <= 1000) {
		ad = (weight - 500) / 100;
		cost = 5 + 1.5 * ad;
	}
	else {
		ad = (weight - 1000) / 250;
		cost = 12.5 + 5 * ad;
	}
	cout << "price: " << cost << endl;
*/
	double a, b, c;
	string sol1a, sol1b, sol2a, sol2b;
	cin >> a >> b >> c;
	int index;
	if (pow(b,2) - 4 * a * c) {
		if (pow(b, 2) - 4 * a * c > 0) {
			sol1a = str( -b / (2*a));
			sol1b = str(sqrt(pow(b, 2) - 4 * a * c) / 2 * a);
			sol2a = str(-b / (2 * a));
			sol2b = str(-sqrt(pow(b, 2) - 4 * a * c) / 2 * a);
			index = 0;
		}
		else {
			sol1a = str(-b / (2 * a) );
			sol1b = str(sqrt(-(pow(b, 2) - 4 * a * c) / 2 * a)) + "i";
			sol2a = str(-b / (2 * a) );
			sol1b = str(sqrt(-(pow(b, 2) - 4 * a * c) / 2 * a)) + "i";
			index = 1;
		}
	}
	else {
		sol1a = -b / (2 * a);
		index = 2;
	}
	if (index == 0)
		cout << "The equation has 2 different real roots: " << sol1a << "+" << sol2a << " and " << sol2a << "+" << sol2b << endl;
	else if (index == 1) 
		cout << "The equation has 2 different complex roots: " << sol1a << "+" << sol2a << " and " << sol2a << "+" << sol2b << endl;
	else 
		cout << "The equation has 2 equal real roots: " << sol1a << endl;


	return 0;
}