#pragma once
#include "PL.h"
#include "PLanguage.h"

//namespace basic_PL
//{
	class OOPL : public PLanguage
	{
	public:
		/*int Year;
		string Name;*/
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		OOPL() {}
	};
	//------------------------------------------------------------------------------
	// ‘абрика, обеспечивающа€ создание ооп при чтении признака €зыка
	class OOPLFactory : public PLanguageFactory {
	public:
		//  онструктор фабрики, устанавливющий признак ооп (равен 2)
		OOPLFactory() :PLanguageFactory(2) { }

		// ѕереопределение метода Create на создание ооп.
		PLanguage* Create(int key) {
			if (key == mark)
				return new OOPL;
			else
				return nullptr;
		}
	};
//}
