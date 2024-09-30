#pragma once

#include "Device.h"
#include "Appliances.h"

class Roomba final : public Device, Appliances
{
public:
	Roomba(int batteryLife, int weight);

	void ShowSpec() override;
};