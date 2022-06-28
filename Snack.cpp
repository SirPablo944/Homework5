#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
using namespace std;

Snack::Snack(const char* snackName)
{
	this->snackName = snackName;
}

int Snack::getSnackCount()
{
	snackCount++;
	return snackCount;
}


