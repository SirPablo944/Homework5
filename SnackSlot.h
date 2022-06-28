#pragma once

class SnackSlot
{
public:
	SnackSlot(int numberOfCells);
	void addSnack(Snack* s);
	int getSlotCount();
	int slotPublicCount = getSlotCount();

private:
	int numberOfCells;
	int snackCount;
	int slotCount;
};