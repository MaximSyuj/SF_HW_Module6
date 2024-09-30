#include "Device.h"


Device::Device(int batteryLife) : _batteryLife(batteryLife) {}

void Device::ShowSpec()
{
	cout << "����������������� ������������(�): " << _batteryLife << endl << endl;
}



Phone::Phone(int batteryLife, string chargingSocket) : Device(batteryLife), _chargingSocket(chargingSocket) {}

void Phone::ShowSpec()
{
	cout << "\t\t\t\t| * * * ������� * * * |\n\t\t\t"
		<< "\n\t\t\t����������������� ������������(�): " << _batteryLife
		<< "\n\t\t\t��� ������� ��� ��������� ����������: "
		<< _chargingSocket << endl << endl;
}


Powerbank::Powerbank(int batteryLife, int chargingPortCount) : Device(batteryLife), _chargingPortCount(chargingPortCount) {}

void Powerbank::ShowSpec()
{
	cout << "\t\t\t\t| * * * ��������� * * * |\n\t\t\t"
		<< "\n\t\t\t����������������� ������������(�): " << _batteryLife
		<< "\n\t\t\t���������� ������ ��� �������� ���������: "
		<< _chargingPortCount << endl << endl;
}


Laptop::Laptop(int batteryLife, int  monitorResolution1, int monitorResolution2) : Device(batteryLife), _monitorResolution1(monitorResolution1), _monitorResolution2(monitorResolution2) {}

void Laptop::ShowSpec()
{
	cout << "\t\t\t\t| * * * ��������� * * * |\n\t\t\t"
		<< "\n\t\t\t����������������� ������������(�): " << _batteryLife
		<< "\n\t\t\t���������� ��������: "
		<< _monitorResolution1 << "x" << _monitorResolution2 << endl << endl;
}