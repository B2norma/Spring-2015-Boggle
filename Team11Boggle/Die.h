#pragma once

using namespace System;
using namespace System::Collections::Generic;

#include <cstdlib>
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

