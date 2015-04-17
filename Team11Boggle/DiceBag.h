#pragma once

#include "Die.h"

namespace model {

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

}

