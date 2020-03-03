#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int x = 10;					//playing with references
	int& y = x;
	cout << "&y: " << &y << " y: " << y << endl;
	y =30;
	cout << "&y: " << &y << " y: " << y << " x: " << x << endl;
}