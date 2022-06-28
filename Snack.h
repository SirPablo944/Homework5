#pragma once

class Snack
{
public:
	Snack(const char* snackName);
	int getSnackCount();
	int snackPublicCount = getSnackCount();
private:
	const char* snackName;
	int snackCount = 0;
};