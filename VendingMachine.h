#pragma once

class VendingMachine
{
public:
	VendingMachine(int numberOfSlots);
	void addSlot(SnackSlot* s);
	int getEmptySlotsCount();

private:
	int numberOfSlots;
	int slotCount = 0;
};