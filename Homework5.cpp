#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
using namespace std;

int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10); // количество батончиков, которые помещаются в слот
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	int slotCount = 10;
	VendingMachine* machine = new VendingMachine(slotCount); // Количество слотов для снеков
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	cout << "Vending machine consists of 10 slots with 10 cells for 10 chocolate bars" << endl
		<< "The bars in the machine are: " << bounty->getSnackName() << ", " << snickers->getSnackName() << endl
		<< "Number of filled slots in the machine is: " << machine->getSlotsCount() << endl
		<< "Number of filled cells (with bars) in the slot is: " << slot->getCellsCount() << endl
		<< "Number of empty slots in the machine is:" << machine->getEmptySlotsCount() << endl
		<< "Number of empty cells in the slot is:" << slot->getEmptyCellsCount() << endl;



	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

}
