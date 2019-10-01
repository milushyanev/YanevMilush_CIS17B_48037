#ifndef UNIT_H
#define UNIT_H

class Unit
{
public:
	std::string UnitType();
	void setUnitType(std::string);
	std::string getUnitNumber();
	void setUnitNumber(std::string);
	bool getAvailable(bool);
	float getUnitSqFt();
	float getUnitHeight();

private:
	std::string unitType();
	std::string unitNumber();
	bool available();
	float unitHeight();
	float unitSqFt();

};


#endif UNIT_H
