#include <iostream>																		
#include <string>
#include <Windows.h>

#include "route_header.hpp"			//����������� ����� ���������


int main()																					
{
	// ���� ���������� ����������
	const int arraylength = 8;
	MARSH (TRAFIC[arraylength]);	//�������� ������� TRAFIC �� ������ MARSH
	// ���� ���������� ����������
	SetConsoleCP(1251);																			
	SetConsoleOutputCP(1251);
	add_route(TRAFIC, arraylength);																
	show_one_route(TRAFIC, arraylength);														
	show_full_route(TRAFIC, arraylength);														
	system("pause");																			
	return 0;																					
}