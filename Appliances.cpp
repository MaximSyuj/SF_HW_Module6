#include "Appliances.h"


Appliances::Appliances(int weight) : _weight(weight) {}

void Appliances::ShowSpec()
{
	cout << "���(��): " << _weight << endl << endl;
}



Washer::Washer(int weight, int maximumLoad) : Appliances(weight), _maximumLoad(maximumLoad) {}

void Washer::ShowSpec()
{
	cout << "\t\t\t\t| * * * ���������� ������ * * * |\n\t\t\t"
		<< "\n\t\t\t���(��): " << _weight
		<< "\n\t\t\t������������ ��������(��): "
		<< _maximumLoad << endl << endl;
}


Fridge::Fridge(int weight, float height) : Appliances(weight), _height(height) {}

void Fridge::ShowSpec()
{
	cout << "\t\t\t\t| * * * ����������� * * * |\n\t\t\t"
		<< "\n\t\t\t���(��): " << _weight
		<< "\n\t\t\t������(�): "
		<< _height << endl << endl;
}


Microwave::Microwave(int weight, int powerConsumption) : Appliances(weight), _powerConsumption(powerConsumption) {}

void Microwave::ShowSpec()
{
	cout << "\t\t\t\t| * * * ������������� ���� * * * |\n\t\t\t"
		<< "\n\t\t\t���(��): " << _weight
		<< "\n\t\t\t������������ ��������(��): "
		<< _powerConsumption << endl << endl;
}