#include "Device.h"


Device::Device(int batteryLife) : _batteryLife(batteryLife) {}

void Device::ShowSpec()
{
	cout << "Работоспособность аккумулятора(ч): " << _batteryLife << endl << endl;
}



Phone::Phone(int batteryLife, string chargingSocket) : Device(batteryLife), _chargingSocket(chargingSocket) {}

void Phone::ShowSpec()
{
	cout << "\t\t\t\t| * * * Телефон * * * |\n\t\t\t"
		<< "\n\t\t\tРаботоспособность аккумулятора(ч): " << _batteryLife
		<< "\n\t\t\tВид разъёма для зарядного устройства: "
		<< _chargingSocket << endl << endl;
}


Powerbank::Powerbank(int batteryLife, int chargingPortCount) : Device(batteryLife), _chargingPortCount(chargingPortCount) {}

void Powerbank::ShowSpec()
{
	cout << "\t\t\t\t| * * * Повербанк * * * |\n\t\t\t"
		<< "\n\t\t\tРаботоспособность аккумулятора(ч): " << _batteryLife
		<< "\n\t\t\tКоличество портов для зарядных устройств: "
		<< _chargingPortCount << endl << endl;
}


Laptop::Laptop(int batteryLife, int  monitorResolution1, int monitorResolution2) : Device(batteryLife), _monitorResolution1(monitorResolution1), _monitorResolution2(monitorResolution2) {}

void Laptop::ShowSpec()
{
	cout << "\t\t\t\t| * * * Повербанк * * * |\n\t\t\t"
		<< "\n\t\t\tРаботоспособность аккумулятора(ч): " << _batteryLife
		<< "\n\t\t\tРазрешение монитора: "
		<< _monitorResolution1 << "x" << _monitorResolution2 << endl << endl;
}