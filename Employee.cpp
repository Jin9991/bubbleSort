#include "Employee.h"
#include <iostream>
Employee::Employee(string a, int b, int c, string d, int e) {
	name = a;
	id = b;
	age = c;
	job = d;
	year = e;
}

void Employee::pirntState() {
	cout << "Name:       " << name << endl
		<< "ID:         " << id << endl
		<< "Age:        " << age << endl
		<< "Job:        " << job << endl
		<< "Hire Year:  " << year << endl
		<< "*******************************************\n";
}

string Employee::getName() {
	return name;
}

int Employee::getId() {
	return id;
}

int Employee::getAge() {
	return age;
}

string Employee::getJob() {
	return job;
}

int Employee::getYear() {
	return year;
}

void Employee::printResult() {
	cout << "FOUND: Name: " << name << ", Age : " << age << ", Job : " << job << ", Hired : " << year << endl;

}




