#pragma once
#include "PL.h"
#include "PLanguage.h"

//namespace basic_PL
//{
	//����������� ����� ����������������
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
	// �������, �������������� �������� ��� ��� ������ �������� �����
	class PPLFactory : public PLanguageFactory {
	public:
		// ����������� �������, �������������� ������� ��� (����� 1)
		PPLFactory() :PLanguageFactory(1) { }

		// ��������������� ������ Create �� �������� �����.
		PLanguage* Create(int key) {
			if (key == mark)
				return new PPL;
			else
				return nullptr;
		}
	};
//}
