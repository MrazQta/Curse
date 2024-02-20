#include "functions.h"

int dice() {
	const short maxValue = 6;
	const short minValue = 1;
	srand(time(0));
	int first_dice = rand() % (maxValue - minValue + 1) + minValue;
	int second_dice = rand() % (maxValue - minValue + 1) + minValue;
	cout << first_dice << endl
		<< second_dice << endl;
	return 0;
}