#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int x = 10;					//playing with references
	int& y = x;
	cout << "&y: " << &y << " y: " << y << endl;
	y =30;
	cout << "&y: " << &y  << "&x: " <<  &x << " y: " << y << " x: " << x << endl; //references represent a new name for the same memory adress. &y = &x.

	return 0
}