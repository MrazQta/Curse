#include "functions.h"
int fahrenheit_to_celsius() {

	double fahrenheit = {};
	cout << "ID потока = " << this_thread::get_id() << " \FtC\t " << "Fahrenheit: ";
	cin >> fahrenheit;
	cout << endl;

	this_thread::sleep_for(chrono::milliseconds(10000));

	double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

	cout << "Celsius: " << celsius;
	return 0;
}