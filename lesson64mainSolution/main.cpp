#include "Car.h"

int main() {
	int number{ };
	cout << "number = " << number << endl;

	int* array = new int[3] {1};
	cout << array[0] << ", " << array[1] << ", " << array[1] << endl;

	Car alex{ "S", "Tesla", 1, "America", true};
	cout << alex.toString() << endl;

	delete[] array;
}