#pragma once
#include "PL.h"
#include "PLanguage.h"

//namespace basic_PL
//{
	//Процедурные языки программирования
	class PPL : public PLanguage
	{
	/*public:
		int Year;
		string Name;*/
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		PPL() {}
	};
	//------------------------------------------------------------------------------
	// Фабрика, обеспечивающая создание пяз при чтении признака языка
	class PPLFactory : public PLanguageFactory {
	public:
		// Конструктор фабрики, устанавливющий признак пяз (равен 1)
		PPLFactory() :PLanguageFactory(1) { }

		// Переопределение метода Create на создание языка.
		PLanguage* Create(int key) {
			if (key == mark)
				return new PPL;
			else
				return nullptr;
		}
	};
//}
