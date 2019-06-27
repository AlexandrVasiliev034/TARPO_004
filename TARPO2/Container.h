#pragma once
#include "PLanguage.h"

//namespace basic_PL
//{
	class container
	{
		enum {max_len = 100}; // ������������ �����
		int len; //������� �����
		PLanguage *cont[max_len];
	public:
		void In(ifstream &ifst); // ���� ������ � ��������� �� �������� ������
		void Out(ofstream &ofst); // ����� ������ � ��������� ������
		void Clear(); // ������� ����������
		container(); // ������������� ����������
		~container() { Clear(); } // ���������� ���������� ����� ������������
	};
//}
