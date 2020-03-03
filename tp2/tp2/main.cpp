//#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
//#include <algorithm>
#include <stdio.h>
//#include <iomanip>

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

/*	double a, b, c;
	double sol1a, sol1b, sol2a, sol2b;
	cin >> a >> b >> c;
	int index;
	if (pow(b,2) - 4 * a * c) {
		if (pow(b, 2) - 4 * a * c > 0) {
			sol1a =  -b / (2*a) ;
			sol1b = sqrt(pow(b, 2) - 4 * a * c) / 2 * a;
			sol2a = -b / (2 * a);
			sol2b = -sqrt(pow(b, 2) - 4 * a * c) / 2 * a;
			index = 0;
		}
		else {
			sol1a = -b / (2 * a);
			sol1b = sqrt(-( (pow(b, 2) - 4 * a * c) ) )/ 2 * a;
			sol2a = -b / (2 * a) ;
			sol2b = -sqrt(-((pow(b, 2) - 4 * a * c))) / 2 * a;
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
		cout << "The equation has 2 different complex roots: " << sol1a << "+" << sol2a << "i" << " and " << sol2a << "+" << sol2b << "i" << endl;
	else 
		cout << "The equation has 2 equal real roots: " << sol1a << endl;
*/
/*
	double n, q, j, amount;
	cin >> n >> q >> j;
	amount = 0;

	for (int i = 0; i < n; i++) {
		amount += q;
		amount += amount * j;
	}
	cout << amount << endl;

*/

/* ------------------------ DETETAR ERROS DE INPUT ----------------------

	int sum = 0;
	bool endOfInput = false;
	while (!endOfInput) {
		for (int i = 1; i <= 5; i++) {
			bool validInput = true;
			int value;
			do {
				validInput = true;
				cout << "value no. " << i << " ?" << endl;
				cin >> value;
				if (cin.fail()) {
					if (cin.eof())
						endOfInput = true;
					else {
						validInput = false;
						cin.clear();
						cin.ignore(10000, '\n');
					}
				}
				else
					if (cin.peek() != '\n')
						validInput = false;
				cin.ignore(10000, '\n');

			} while (validInput == false);
			if (! endOfInput)
				sum += value;
		}
		cin.clear();
		cout << "sum: " << sum << endl;
		endOfInput = true;
	}
	------------------------------------------------------------------
	*/
/* 7a
	int n;
	cin >> n;
	bool prime = true;
	for (int c = 2; c < n; c++) {
		if (n % c == 0) {
			prime = false;
			break;
		}
	}
	if (prime)
		cout << n << " is prime" << endl;
	else
		cout << n << " is not prime" << endl;
*/
/* int primeCount = 0;
int i = 0;
unsigned long a = ULLONG_MAX;
cout << a << endl;
while (true) {
	//if (primeCount == 100)
	//	break;
	bool prime = true;
	for (int j = 2; j < (a**0.5); j = j+2) {
		if (a % j == 0) {
			prime = false;
			break;
		}
		else
			j -= 1;
	}
	if (prime) {
		cout << a << endl;
		break;
		//primeCount++;
	}
	a--;
}
*/
/*
int start, end, jump;
cin >> start >> end >> jump;
cout << "ang     " << "sin     " << "cos     " << "tan     " << endl;
for (int degrees = start; degrees <= end; degrees += jump) {
	float rad = (degrees * M_PI)/ 180;
	if (degrees == 0)
		cout << " " <<  degrees << "   " <<  fixed << setprecision(5) << sin(rad) << "  " << cos(rad) << "  " << tan(rad) << endl;
	else if (degrees == 90)
		cout << " " << degrees << "  " << fixed << setprecision(5) << sin(rad) << "  " << cos(rad) << "  " << "infinite" << endl;
	else 
		cout << " " << degrees << "  " << fixed << setprecision(5) << sin(rad) << "  " << cos(rad) << "  " << tan(rad) << endl;
}
*/
/*
int num;
int size = 1;
cout << "enter a number :" << endl;
cin >> num;
bool palindrome = true;
int aux = num;

while ( (aux / 10) >= 1 ) {
	aux = aux / 10;
	size++;
}
int final = size / 2;
//cout << num << " " << size << endl;
int aux2 = num;
for (int count = 0; count < final; count ++ ) {
	if ((num % 10) == ((int(num) / int( pow(10,size-1)) ) % 10) ) {
		num = num / 10;
		size -= 2;
	}
	else {
		palindrome = false;
		break;
	}
}
if (palindrome)
	cout << aux2 << " is a palindrome" << endl;
else
	cout << aux2 << " is not a palindrome" << endl;
*/
/*int num;
cin >> num;
for (int i = 2; i <= num; i++) {
	while (num% i == 0) {
		if (num / i == 1)
			cout << i << endl;
		else
			cout << i << "*";
			num = num / i;
		if (num == 1)
			break;
	}
}
*/
	int num;
	cin >> num;
	float sum = 0.0000000;

	for (int i = 0; i < num; i++) {
		if (i%2== 0)
			sum += ( 4 / (2 * i + 1) ) ;
		else
			sum -= ( 4 / (2 * i + 1) );
	}
	cout << sum << endl;
	return 0;
}