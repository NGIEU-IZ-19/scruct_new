#include <iostream>																		
#include <string>
#include <Windows.h>

#include "route_header.hpp"			//Подключение файла заголовка


int main()																					
{
	// Блок объявления переменных
	const int arraylength = 8;
	MARSH (TRAFIC[arraylength]);	//Создание объекта TRAFIC из класса MARSH
	// Блок объявления переменных
	SetConsoleCP(1251);																			
	SetConsoleOutputCP(1251);
	add_route(TRAFIC, arraylength);																
	show_one_route(TRAFIC, arraylength);														
	show_full_route(TRAFIC, arraylength);														
	system("pause");																			
	return 0;																					
}