#include "Roomba.h"


Roomba::Roomba(int batteryLife, int weight) : Device(batteryLife), Appliances(weight) {}

void Roomba::ShowSpec()
{
	cout << "\t\t\t\t| * * * �����-������� * * * |\n\t\t\t"
		<< "\n\t\t\t����������������� ������������(�): " << _batteryLife
		<< "\n\t\t\t���(��): " << _weight
		<< endl << endl;
}