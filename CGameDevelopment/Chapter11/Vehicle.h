#pragma once

class Vehicle
{
public:
	Vehicle();
	~Vehicle();

	virtual unsigned int GetNumberOfWheels() const
	{
		return 0;
	}
};

