#include "functions.h"

int dice() {
	const int maxValue = 6;
	const int minValue = 1;
	srand(time(0));
	int first_dice = rand() % (maxValue - minValue + 1) + minValue;
	int second_dice = rand() % (maxValue - minValue + 1) + minValue;
	cout << first_dice << endl
		<< second_dice << endl;
	return 0;
}