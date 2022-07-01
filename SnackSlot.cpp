#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
using namespace std;


SnackSlot::SnackSlot(int numberOfCells) : _numberOfCells(numberOfCells)
{
	_slotCount++;
}

void SnackSlot::addSnack(Snack* s)
{
	if (this->_snackCount < this->_numberOfCells)
	{
		this->_snackCount += s->getSnackCount();
	}
	else
	{
		cout << "Snacks exceed the slot capacity" << endl;
	}
}

int SnackSlot::getSlotCount()
{
	return _slotCount;
}

int SnackSlot::getEmptyCellsCount()
{
	return this->_numberOfCells - this->_snackCount;
}

int SnackSlot::getCellsCount()
{
	return this->_snackCount;
}