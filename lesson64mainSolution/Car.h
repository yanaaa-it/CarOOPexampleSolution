#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	string model;
	string name;
	int age;
	int* price;
	string country;
	bool stock;
	
public:
	

	//default constructor / constructor without arguments
	Car::Car(): Car("", "No name", 10, "", true) {}

	//canonical constructor / constructor with arguments
	Car::Car(string model, string nm, int ag, string cn, bool a) {
		cout << "Student canonical constructor" << endl;
		this->model = model;
		this->name = nm;
		this->age = ag;
		country = cn;
		price = new int [3] {15000, 35000, 75000};
		stock = a;
	}

	//constructor with arguments
	Car::Car(int ag, string nm): Car() {
		cout << "Student constructor with arguments" << endl;
		model = "";
		name = nm;
		age = ag;
		country = "";
		price = new int [3] {15000, 35000, 45000};
		stock = true;
	}

	//copy-constructor / constructor with arguments
	Car::Car(const Car&car): Car(car.model, car.name,car.age,car.country,car.price,car.stock) {
		cout << "Student copy-constructor" << endl;
		/*model = car.model;
		name = car.name;
		age = car.age;
		country = car.country;

		price = new int[3] {car.price[0],
			car.price[1],
			car.price[2]};
		stock = car.stock;*/
		if (car.price != NULL && car.count > 0) {
			count = car.count;
			price = new int[count];
			for (int i = 0; i < count; i++)
			{
				price[i] = car.price[];
			}
		}
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