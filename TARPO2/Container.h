#pragma once
#include "PLanguage.h"

//namespace basic_PL
//{
	class container
	{
		enum {max_len = 100}; // максимальная длина
		int len; //текущая длина
		PLanguage *cont[max_len];
	public:
		void In(ifstream &ifst); // ввод языков в котнейнер из входного потока
		void Out(ofstream &ofst); // вывод языков в выходного потока
		void Clear(); // очистка контейнера
		container(); // инициализация контейнера
		~container() { Clear(); } // утилизация контейнера перед уничтожением
	};
//}
