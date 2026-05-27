#include"group.h"
Group::Group() : Group("no name", nullptr, 0) {

}
Group::Group(Car** list, int size) {
	this->name = name;
	if (list != nullptr && size > 0) {
		this->list = list;
		this->size = size;
	}

}
Group::Group(string name) : Group(name, nullptr, 0) {

}
Group::Group(const Group& group) : Group(group.name) {
	if (group.list != nullptr && group.size > 0) {
		size = group.size;
		list = new Car * [group.size];

		for (int i = 0; i < size; i++)
		{
			list[i] = new Car(*group.list[i]);
		}
	}
}
Group::~Group() {
	if (list != nullptr) {
		for (int i = 0; i < size; i++)
		{
			delete list[i];
		}
		delete[] list;
	}
}

string Group::getName() {

}
void Group::setName(string name) {
	this->name;
}
int Group::getSize() {
	return size;
}
Car* Group::getCar(int index) {
	if (size != 0 && index >= 0 && index < size) {
		return list[index];
	}
	return NULL;
}
void Group::addCar(Car* car) {
	if (list != nullptr) {
		Car** temp = new Car * [size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = car;
		delete[]list;
		list = temp;
	}
	else {
		list = new Car * [1];
		size = 1;
		list[0] = car;
	}
}
void Group::removeCar(int index) {
	if (list != nullptr && index >= 0 && index < size) {
		Car** temp = new Car * [size - 1];
		for (int i = 0,j=0; i < size; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}
		delete list[index];
		delete[] list;
		list = temp;
		size--;
	}
}
void Group::removeCar(Car* car) {

}

string Group::toString() {
	string s = "Group" + name + "\n";
	if (size <= 0) {
		s += "empty";
	}
	else {
		for (int i = 0; i < size; i++)
		{
			s += list[i]->toString();
		}
	}return s;
}