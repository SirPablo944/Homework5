#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
using namespace std;

Snack::Snack(const char* snackName) : _snackName(snackName)
{
	_snackCount++;
}

int Snack::getSnackCount()
{
	return _snackCount;
}

const char* Snack::getSnackName()
{
	return _snackName;
}
