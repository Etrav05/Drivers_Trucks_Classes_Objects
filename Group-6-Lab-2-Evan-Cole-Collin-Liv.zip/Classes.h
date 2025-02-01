#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#pragma once

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
	double distanceFrom(truck t) {
		int x = (this->l.x - t.l.x);  // loctation of given truck
		int y = (this->l.y - t.l.y);  // location of other truck

		return sqrt(x * x + y * y);
	}

	double distanceFrom() {  // distance from origin
		int x = this->l.x;
		int y = this->l.y;

		return sqrt(x * x + y * y);
	}
};

void accessCard(truck t);