#include "RentalCar.h"
#ifndef RENTALAGENCY_H
#define RENTALAGENCY_H
#define MAXSIZE 256
#define ZIPCODE 5
#define AMOUNTOFCARS 5
struct rentalAgency
{
	rentalCar inventory[AMOUNTOFCARS];
	char name[MAXSIZE];
	int zipCode[ZIPCODE];
};
#endif
	