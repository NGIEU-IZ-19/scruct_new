#pragma once
#include <iostream>
#include <string>

class MARSH						
{
public:																				
	std::string BEGST;
	std::string TERM;
	int NUMER;
};

bool has_only_digits(const std::string check_number);				//Форма декларации - это имя функции со списком аргументов, но без тела самой функции, заканчивается;
																	//Обещание компилятору, что функция существует  в другой единице трансляции ()
void add_route(MARSH TRAFIC[], int arraylength);					//Declaration
int lineSearch(MARSH TRAFIC[], int requiredKey, int arraylength);	//Declaration
void show_one_route(MARSH TRAFIC[], int arraylength);				//Declaration
void show_full_route(MARSH TRAFIC[], int arraylength);				//Declaration