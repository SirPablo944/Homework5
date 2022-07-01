#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
using namespace std;

VendingMachine::VendingMachine(int numberOfSlots) : _numberOfSlots(numberOfSlots)
{
}

void VendingMachine::addSlot(SnackSlot* s)
{
	if (this->_slotCount < this->_numberOfSlots)
	{
		this->_slotCount += s->getSlotCount();
	}
	else
	{
		cout << "Slots exceed the vending machine capacity" << endl;
	}
}

int VendingMachine::getEmptySlotsCount()
{
	return this->_numberOfSlots - this->_slotCount;
}

int VendingMachine::getSlotsCount()
{
	return this->_slotCount;
}