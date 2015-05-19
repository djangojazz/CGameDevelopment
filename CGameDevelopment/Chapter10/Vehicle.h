#pragma once

class Vehicle
{
protected:
	unsigned int m_numberOfWheels;

public:
	Vehicle();
	~Vehicle();

	unsigned int GetNumberOfWheels() const;
};

