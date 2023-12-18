#pragma once
#include <iostream>

class Composer{
public:
	Composer();

	virtual void Introduce();

	virtual ~Composer();

private:




protected:
	const char* name_="name";

};

