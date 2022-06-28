#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
using namespace std;


SnackSlot::SnackSlot(int numberOfCells)
{
	this->numberOfCells = numberOfCells;
}

void SnackSlot::addSnack(Snack* s)
{
	if (this->snackCount < this->numberOfCells)
	{
		this->snackCount += s->snackPublicCount;
	}
	else
	{
		cout << "Snacks exceed the slot capacity" << endl;
	}
}

int SnackSlot::getSlotCount()
{
	slotCount = 0;
	slotCount++;
	return slotCount;
}
