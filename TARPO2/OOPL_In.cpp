#include "pch.h"
#include "OOPL.h"

using namespace std;
//namespace basic_PL
//{
	//���� ���������� ��������-���������������� ����� ����������������
	void OOPL::InData(ifstream& ifst)
	{
		ifst >> Name >> Year;
	}
	//------------------------------------------------------------------------------
	// �������� ������� ���
	namespace {
		OOPLFactory oof;
	}

//}