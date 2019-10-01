#ifndef STORAGEFACILITY_H
#define STORAGEFACILITY_H


class StorageFacility

{
public:
	std::string getFacilityNumber();
	void getFacilityNumber(std::string);
	std::string getFacilityName();
	void getFacilityName(std::string);
	std::string getManagerName();
	void getManagerName(std::string);
	int getUnitAmount();
	void setUnitAmount(int);
	Unit getUnit();

private:
	Unit Unit[];
	std::string facilityNumber();
	std::string facilityName();
	std::string managerName();
	int unitAmout();

};


#endif STORAGEFACILITY_H
