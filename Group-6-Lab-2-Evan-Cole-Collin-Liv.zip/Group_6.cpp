#include <iostream>
#include <random>
#include <math.h>

using namespace std;

struct driver {  // driver class 
	string firstName;
	string lastName;
	int driverId;

public:
	driver createDriver(string firstName, string lastName, int id) {  // function to create driver object
		driver d;
		d.firstName = firstName;
		d.lastName = lastName;
		d.driverId = id;
		return d;
	}
};

struct location {  // location class
	int x;
	int y;

public:
	location createLocation(int x, int y) { // function to create location 
		location l;
		l.x = x;
		l.y = y;
		return l;
	}
};

struct truck {  // truck class -> with driver and location attributes 
	driver d;
	location l;

public: 

	double distanceFrom(int x, int y) {
		int location1 = pow(2, (l.x - l.y));  // loctation of given truck
		int location2 = pow(2, (x - y));  // location of origin or other truck

		return sqrt(location1 + location2);
	}
};


int main() {
	driver d1, d2, d3;  // initialize driver and truck objects
	truck t1, t2;

	d1.createDriver("Smith", "John", 1001);  // create driver objects
	d2.createDriver("Travis", "Evan", 1002);
	d3.createDriver("Glump", "Forest", 1003);



	return 0;
}

