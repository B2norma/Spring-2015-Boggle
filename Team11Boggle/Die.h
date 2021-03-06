#pragma once

#include <cstdlib>

using namespace System;
using namespace System::Collections::Generic;
using namespace std;

namespace model {

	ref class Die {

	private:
		List<String^> ^letters;

	public:
		Die(String^, String^, String^, String^, String^, String^);
		virtual ~Die();

		String^ getRandomLetter();
	};
}

