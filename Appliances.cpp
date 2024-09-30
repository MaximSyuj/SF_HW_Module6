#include "Appliances.h"


Appliances::Appliances(int weight) : _weight(weight) {}

void Appliances::ShowSpec()
{
	cout << "Вес(кг): " << _weight << endl << endl;
}



Washer::Washer(int weight, int maximumLoad) : Appliances(weight), _maximumLoad(maximumLoad) {}

void Washer::ShowSpec()
{
	cout << "\t\t\t\t| * * * Стиральная машина * * * |\n\t\t\t"
		<< "\n\t\t\tВес(кг): " << _weight
		<< "\n\t\t\tМаксимальная нагрузка(кг): "
		<< _maximumLoad << endl << endl;
}


Fridge::Fridge(int weight, float height) : Appliances(weight), _height(height) {}

void Fridge::ShowSpec()
{
	cout << "\t\t\t\t| * * * Холодильник * * * |\n\t\t\t"
		<< "\n\t\t\tВес(кг): " << _weight
		<< "\n\t\t\tВысота(м): "
		<< _height << endl << endl;
}


Microwave::Microwave(int weight, int powerConsumption) : Appliances(weight), _powerConsumption(powerConsumption) {}

void Microwave::ShowSpec()
{
	cout << "\t\t\t\t| * * * Микроволновая печь * * * |\n\t\t\t"
		<< "\n\t\t\tВес(кг): " << _weight
		<< "\n\t\t\tПотребляемая мощность(Вт): "
		<< _powerConsumption << endl << endl;
}