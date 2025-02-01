#include "Classes.h"

void accessCard(truck t) {  // function to print trucks information
	ofstream myfile("driverInfo.txt", ios::app);  // open file in appened (app) mode
	if (!myfile) {
		cout << "Unable to open file";
		return;
	}
	// if the file was opened properly the continue
	myfile << "Drivers first name: " << t.d.firstName << endl;
	myfile << "Drivers last name: " << t.d.lastName << endl;
	myfile << "Driver ID: " << t.d.driverId << endl;
	myfile << "Truck ID: " << t.truckId << endl;
	myfile << "Truck location (x, y): " << "(" << t.l.x << ", " << t.l.y << ")\n" << endl;
	myfile.close();
}