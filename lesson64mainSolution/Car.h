#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	int id;
	string name;
	int age;
	double* marks;
	int class_number;
	char class_letter;
	bool alive;

	//default constructor / constructor without arguments
	Car() {
		cout << "Default costructor" << endl;
		id = 0;
		name = "";
		age = 0;
		class_number = 0;
		class_letter = '\0';
		marks = new double [3] {10, 9, 7};
		alive = false;
	}

	//canonical constructor / constructor with arguments
	Car(int i, string nm, int ag, int number, char letter, bool a) {
		cout << "Student canonical constructor" << endl;
		id = i;
		name = nm;
		age = ag;
		class_number = number;
		class_letter = letter;
		marks = new double [3] {10, 9, 7};
		alive = a;
	}

	//constructor with arguments
	Car(int ag, string nm) {
		cout << "Student constructor with arguments" << endl;
		id = 0;
		name = nm;
		age = ag;
		class_number = 0;
		class_letter = '\0';
		marks = new double [3] {10, 9, 7};
		alive = true;
	}

	//copy-constructor / constructor with arguments
	Car(const Car&car) {
		cout << "Student copy-constructor" << endl;
		id = car.id;
		name = car.name;
		age = car.age;
		class_number = car.class_number;
		class_letter = car.class_letter;
		marks = new double[3] {car.marks[0],
			car.marks[1],
			car.marks[2]};
		alive = car.alive;
	}

	~Car() {
		cout << "Student destructor" << endl;
		if (marks != NULL) {
			delete[] marks;
		}
	}

	string toString() {
		string s = "Student: ";
		s += "id = " + to_string(id);
		s += ", name = " + name;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(class_number) + to_string(class_letter);
		s += ", marks = {" + to_string(marks[0]) + ", " + to_string(marks[1])
			+ ", " + to_string(marks[2]) + "}";
		s += ", alive = ";
		s += (alive ? "yes" : "no");

		return s;
	}
};