#pragma once

class VendingMachine
{
public:
	VendingMachine(int numberOfSlots);
	void addSlot(SnackSlot* s);
	int getEmptySlotsCount();
	int getSlotsCount();

private:
	int _numberOfSlots;
	int _slotCount = 0;
};