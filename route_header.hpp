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

bool has_only_digits(const std::string check_number);				//����� ���������� - ��� ��� ������� �� ������� ����������, �� ��� ���� ����� �������, �������������;
																	//�������� �����������, ��� ������� ����������  � ������ ������� ���������� ()
void add_route(MARSH TRAFIC[], int arraylength);					//Declaration
int lineSearch(MARSH TRAFIC[], int requiredKey, int arraylength);	//Declaration
void show_one_route(MARSH TRAFIC[], int arraylength);				//Declaration
void show_full_route(MARSH TRAFIC[], int arraylength);				//Declaration