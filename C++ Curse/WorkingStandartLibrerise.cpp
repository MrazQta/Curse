#include "functions.h"

int find_area_of_circle() {

	cout << "ID потока = " << this_thread::get_id() << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));


	const double pi = 3.14; 
	double radius {};
	cout << "Radius: ";
	cin >> radius;

	double area_of_circle = pi * pow(radius, 2);

	cout << "Area of circle is " << area_of_circle;
	return 0;
}