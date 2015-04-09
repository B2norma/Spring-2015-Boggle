#pragma once

#include "Die.h"

ref class DiceBag
{
private:
	List<Die^> ^dice;

	void fillDiceBag();


public:
	DiceBag();
	virtual ~DiceBag();

	 Die^ getRandomDie();
};

