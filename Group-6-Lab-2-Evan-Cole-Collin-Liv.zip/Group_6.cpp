#include <iostream>
#include <random>

using namespace std;

struct driver {  // driver class 
	string firstName;
	string lastName;
	int driverId;
};

struct truck {  // truck class
	int truckId;

	int locationX;
	int locationY;
};

driver createDriver(string firstName, string lastName, int id) {  // function to create driver object
	driver d;
	d.firstName = firstName;
	d.lastName = lastName;
	d.driverId = id;
	return d;
}

truck createTruck(int id, int x, int y) { // function to create truck object
	truck t;
	t.truckId = id;
	t.locationX = x;
	t.locationY = y;
	return t;
}

int main() {
	
	driver d1, d2, d3;  // initialize and set drivers values 
	d1 = createDriver("Smith", "John", 1001);
	d2 = createDriver("Travis", "Evan", 1002);
	d3 = createDriver("Glump", "Forest", 1003);

}

