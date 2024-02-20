#include "functions.h"
int sales_and_tax() {

	this_thread::sleep_for(chrono::milliseconds(500));

	int sales = {};
	cout << "ID потока = " << this_thread::get_id() << " \SaT\t " << "HOW MUCH YOUR SALES ARE? " << "=$";
	cin >> sales;
	cout << endl;

	const double state_tax_rate = 0.04;
	double state_tax = sales * state_tax_rate;
	double sales_after_state_tax = sales - state_tax;

	const double count_tax_rate = 0.02;
	double count_tax = sales * count_tax_rate;
	double sales_after_count_tax = sales - count_tax;

	double sales_aftet_all_tax = sales - count_tax - state_tax;

	cout << "SALES: $" << sales << endl
		<< "SALES AFTER STATE TAX: $" << sales_after_state_tax << endl
		<< "SALES AFTER COUNTY TAX: $" << sales_after_count_tax << endl
		<< "SALES AFTER ALL TAXES: $" << sales_aftet_all_tax << endl;
	return 0;
}