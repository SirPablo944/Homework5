#pragma once

class Snack
{
public:
	Snack(const char* snackName);
	int getSnackCount();
	const char* getSnackName();

private:
	const char* _snackName;
	int _snackCount = 0;
};