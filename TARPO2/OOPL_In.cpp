#include "pch.h"
#include "OOPL.h"

using namespace std;
//namespace basic_PL
//{
	//Ввод параметров объектно-ориентированного языка программирования
	void OOPL::InData(ifstream& ifst)
	{
		ifst >> Name >> Year;
	}
	//------------------------------------------------------------------------------
	// Создание фабрики ооп
	namespace {
		OOPLFactory oof;
	}

//}