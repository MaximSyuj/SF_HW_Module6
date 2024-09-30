#pragma once

#include "IElectronics.h"


class Appliances : virtual public IElectronics
{
public:
	Appliances(int weight);

	virtual void ShowSpec() override;

protected:
	int _weight;
};



class Washer final : public Appliances
{
public:
	Washer(int weight, int maximumLoad);

	void ShowSpec() override;

private:
	int _maximumLoad;
};


class Fridge final : public Appliances
{
public:
	Fridge(int weight, float height);

	void ShowSpec() override;

private:
	float _height;
};


class Microwave final : public Appliances
{
public:
	Microwave(int weight, int powerConsumption);

	void ShowSpec() override;

private:
	int _powerConsumption;
};