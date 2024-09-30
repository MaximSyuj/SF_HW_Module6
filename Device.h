#pragma once

#include "IElectronics.h"


class Device : virtual public IElectronics
{
public:
	Device(int batteryLife);

	virtual void ShowSpec() override;

protected:
	int _batteryLife;

};


class Phone final : public Device
{
public:
	Phone(int batteryLife, string chargingSocket);

	void ShowSpec() override;

private:
	string _chargingSocket;
};


class Powerbank final : public Device
{
public:
	Powerbank(int batteryLife, int chargingPortCount);

	void ShowSpec() override;

private:
	int _chargingPortCount;
};


class Laptop final : public Device
{
public:
	Laptop(int batteryLife, int monitorResolution1, int monitorResolution2);

	void ShowSpec() override;

private:
	int _monitorResolution1;
	int _monitorResolution2;
};