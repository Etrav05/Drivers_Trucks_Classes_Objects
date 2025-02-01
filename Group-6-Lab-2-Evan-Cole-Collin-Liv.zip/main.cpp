#include "Classes.h"

using namespace std;

int main() {
	ofstream clearFile("driverInfo.txt");
	clearFile.close();  // clears the driverInfo file before use
	 
	driver d1 = { "Liz", "Brian", 35 };  // create driver objects (with direct initailization)
	driver d2 = { "Mike", "Smith", 69 };
	driver d3 = { "Forest", "Glump", 1003 };

	location l1 = { 2, 3 };  // create location objects
	location l2 = { 5, 2 };

	truck t1 = { d1, l1, 178534 };  // create truck objects 
	truck t2 = { d2, l2, 245817 };

	accessCard(t1);  // call function to print trucks and drivers information when access card is swipped
	accessCard(t2);

	cout << "Distance between trucks: " << t1.distanceFrom(t2) << " units" << endl;
	cout << "Distance between truck 178534 and origin: " << t1.distanceFrom() << " units" << endl;
	cout << "Distance between truck 245817 and origin: " << t2.distanceFrom() << " units" << endl;

	return 0;
}
