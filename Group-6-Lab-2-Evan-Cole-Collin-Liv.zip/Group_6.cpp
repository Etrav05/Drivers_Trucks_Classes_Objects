#include <iostream>
#include <random>
#include <math.h>
#define DRIVERS			3

using namespace std;

struct driver {  // driver class 
	string firstName;
	string lastName;
	int driverId;
};

struct location {  // location class
	int x;
	int y;
};

struct truck {  // truck class -> with driver and location attributes 
	driver d;
	location l;
	int truckId;

public: 
	double distanceFrom(truck t1, truck t2) {
		int x = (t1.l.x - t2.l.x);  // loctation of given truck
		int y = (t1.l.y - t2.l.y);  // location of other truck

		return sqrt(x * x + y * y);
	}

	void printTruckInfo(truck t) {
		cout << "Drivers first name: " << t.d.firstName << endl;
		cout << "Drivers last name: " << t.d.lastName << endl;
		cout << "Driver ID: " << t.d.driverId << endl;
		cout << "Truck ID: " << t.truckId << endl;
		cout << "Truck location (x, y): " << "(" << t.l.x << ", " << t.l.y << ")\n" << endl;
	}
};

int main() {

	driver d1 = { "Liz", "Brian", 35 };  // create driver objects (with direct initailization)
	driver d2 = { "Mike", "Smith", 69 }; 
	driver d3 = { "Forent", "Glump", 1003 };  
	 
	location l1 = { 2, 3 };  // create location objects
	location l2 = { 5, 2 };

	truck t1 = { d1, l1, 178534 };  // create truck objects 
	truck t2 = { d2, l2, 245817 };

	t1.printTruckInfo(t1);
	t2.printTruckInfo(t2);

	cout << "Distance between trucks: " << t1.distanceFrom(t1, t2) << "units" << endl;

	// cout << t1.distanceFrom(t1, t2) << endl;

	return 0;
}

