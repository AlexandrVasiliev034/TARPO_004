#include "pch.h"
#include "PPL.h"

using namespace std;
//namespace basic_PL
//{
	//Ввод параметров процедурного языка программирования
	void PPL::InData(ifstream& ifst)
	{
		ifst >> Name >> Year;
	}
	// Создание фабрики ppl
	namespace {
		PPLFactory pf;
	}
//}