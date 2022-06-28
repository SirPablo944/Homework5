#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
using namespace std;

VendingMachine::VendingMachine(int numberOfSlots)
{
	this->numberOfSlots = numberOfSlots;
}

void VendingMachine::addSlot(SnackSlot* s)
{
	if (this->slotCount < this->numberOfSlots)
	{
		this->slotCount += s->slotPublicCount;
	}
	else
	{
		cout << "Slots exceed the vending machine capacity" << endl;
	}
}

int VendingMachine::getEmptySlotsCount()
{
	return this->numberOfSlots - this->slotCount;
}