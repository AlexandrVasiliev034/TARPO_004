// TARPO2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "Container.h"
#include <iostream>

using namespace std;
//using namespace basic_PL;

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
		cout << "incorrect command line" << endl;
		return 1;
    }
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);

	container c;
	c.In(ifst);

	ofst << "Filld container. " << endl;
	c.Out(ofst);

	c.Clear();

	ofst << "Empty container. " << endl;
	c.Out(ofst);

	return 0;
}

