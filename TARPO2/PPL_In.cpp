#include "pch.h"
#include "PPL.h"

using namespace std;
//namespace basic_PL
//{
	//���� ���������� ������������ ����� ����������������
	void PPL::InData(ifstream& ifst)
	{
		ifst >> Name >> Year;
	}
	// �������� ������� ppl
	namespace {
		PPLFactory pf;
	}
//}