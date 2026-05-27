#include"Car.h"

class Group {
private:
	Car** list;
	int size;
	string model;
	string name;
	int age;
	int* price;
	string country;
	bool stock;

public:
	Group();
	Group(Car** list,int size);
	Group(const Group& group);
	~Group();

	string getName();
	void setName(string name);
	int getSize();
	Car* getCar(int index);
	void addCar(Car* car);
	void removeCar(int index);
	void removeCar(Car* car);

	string toString();
};
