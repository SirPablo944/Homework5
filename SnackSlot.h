#pragma once

class SnackSlot
{
public:
	SnackSlot(int numberOfCells);
	void addSnack(Snack* s);
	int getSlotCount();
	int getEmptyCellsCount();
	int getCellsCount();

private:
	int _numberOfCells;
	int _snackCount = 0;
	int _slotCount = 0;
};