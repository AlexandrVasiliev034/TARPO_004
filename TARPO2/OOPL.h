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
	// �������, �������������� �������� ��� ��� ������ �������� �����
	class OOPLFactory : public PLanguageFactory {
	public:
		// ����������� �������, �������������� ������� ��� (����� 2)
		OOPLFactory() :PLanguageFactory(2) { }

		// ��������������� ������ Create �� �������� ���.
		PLanguage* Create(int key) {
			if (key == mark)
				return new OOPL;
			else
				return nullptr;
		}
	};
//}
