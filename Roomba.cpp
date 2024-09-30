#include "Roomba.h"


Roomba::Roomba(int batteryLife, int weight) : Device(batteryLife), Appliances(weight) {}

void Roomba::ShowSpec()
{
	cout << "\t\t\t\t| * * * Робот-пылесос * * * |\n\t\t\t"
		<< "\n\t\t\tРаботоспособность аккумулятора(ч): " << _batteryLife
		<< "\n\t\t\tВес(кг): " << _weight
		<< endl << endl;
}