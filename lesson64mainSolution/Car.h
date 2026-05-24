#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	string model;
	string name;
	int age;
	int* price;
	string country;
	bool stock;

	//default constructor / constructor without arguments
	Car() {
		cout << "Default costructor" << endl;
		model = "";
		name = "";
		age = 0;
		country = "";
		price = new int [3] {10, 9, 7};
		stock = false;
	}

	//canonical constructor / constructor with arguments
	Car(string i, string nm, int ag, string cn, bool a) {
		cout << "Student canonical constructor" << endl;
		model = i;
		name = nm;
		age = ag;
		country = cn;
		price = new int [3] {15000, 35000, 75000};
		stock = a;
	}

	//constructor with arguments
	Car(int ag, string nm) {
		cout << "Student constructor with arguments" << endl;
		model = "";
		name = nm;
		age = ag;
		country = "";
		price = new int [3] {15000, 35000, 45000};
		stock = true;
	}

	//copy-constructor / constructor with arguments
	Car(const Car&car) {
		cout << "Student copy-constructor" << endl;
		model = car.model;
		name = car.name;
		age = car.age;
		country = car.country;

		price = new int[3] {car.price[0],
			car.price[1],
			car.price[2]};
		stock = car.stock;
	}

	~Car() {
		cout << "Student destructor" << endl;
		if (price != NULL) {
			delete[] price;
		}
	}

	string toString() {
		string s = "Student: ";
		s += "model = " +model;
		s += ", name = " + name;
		s += ", age = " + to_string(age);
		s += ", class = " +country ;
		s += ", prices = {" + to_string(price[0]) + ", " + to_string(price[1])
			+ ", " + to_string(price[2]) + "}";
		s += ", stock = ";
		s += (stock ? "yes" : "no");

		return s;
	}
};