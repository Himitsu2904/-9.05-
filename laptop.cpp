#define _CRT_SECURE_NO_WARNINGS
#include "laptop.h"
#include <iostream>
using namespace std;

laptop::laptop::laptop()
{
	model = new char[4];
	strcpy(model, "---");
	oper_syst = new char[4];
	strcpy(oper_syst, "---");
	cpu = new char[4];
	strcpy(cpu, "---");
	price = 0;
	production_year = 0;
}

laptop::laptop(const char* _model)
{
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
	oper_syst = new char[4];
	strcpy(oper_syst, "---");
	cpu = new char[4];
	strcpy(cpu, "---");
	production_year = 0;
	price = 0;
}

laptop::laptop(const char* _model, const char* _oper_syst)
{
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
	oper_syst = new char[strlen(_oper_syst) + 1];
	strcpy(oper_syst, _oper_syst);
	cpu = new char[4];
	strcpy(cpu, "---");
	production_year = 0;
	price = 0;
}

laptop::laptop(const char* _model, const char* _oper_syst, const char* _cpu)
{
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
	oper_syst = new char[strlen(_oper_syst) + 1];
	strcpy(oper_syst, _oper_syst);
	cpu = new char[strlen(_cpu) + 1];
	strcpy(cpu, _cpu);
	production_year = 0;
	price = 0;
}

laptop::laptop(const char* _model, const char* _oper_syst, const char* _cpu, int _production_year)
{
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
	oper_syst = new char[strlen(_oper_syst) + 1];
	strcpy(oper_syst, _oper_syst);
	cpu = new char[strlen(_cpu) + 1];
	strcpy(cpu, _cpu);
	production_year = _production_year;
	price = 0;
}

laptop::laptop(const char* _model, const char* _oper_syst, const char* _cpu, int _production_year, float _price)
{
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
	oper_syst = new char[strlen(_oper_syst) + 1];
	strcpy(oper_syst, _oper_syst);
	cpu = new char[strlen(_cpu) + 1];
	strcpy(cpu, _cpu);
	production_year = _production_year;
	price = _price;
}

void laptop::initialize()
{
	char buff[100];
	cout << "Введите модель ноутбука: "; gets_s(buff, 100);
	model = new char[strlen(buff) + 1];
	strcpy(model, buff);
	cout << "Введите операционую систему ноутбука: "; gets_s(buff, 100);
	oper_syst = new char[strlen(buff) + 1];
	strcpy(oper_syst, buff);
	cout << "Введите процессор ноутбука: "; gets_s(buff, 100);
	cpu = new char[strlen(buff) + 1];
	strcpy(cpu, buff);
	cout << "Введите цену ноутбука: "; cin >> price;
	cout << "Введите год выпуска ноутбука: "; cin >> production_year;
}

void laptop::show()
{
	cout << "\tДанные про ноутбук:";
	cout << "\nМодель: " << model;
	cout << "\nОперационная система: " << oper_syst;
	cout << "\nПроцессор: " << cpu;
	cout << "\nЦена: " << price;
	cout << "\nГод выпуска: " << production_year;
}

void laptop::Set_model(const char* _model)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
}

void laptop::Set_oper_syst(const char* _oper_syst)
{
	if (oper_syst != nullptr)
	{
		delete[] oper_syst;
	}
	oper_syst = new char[strlen(_oper_syst) + 1];
	strcpy(oper_syst, _oper_syst);
}

void laptop::Set_cpu(const char* _cpu)
{
	if (cpu != nullptr)
	{
		delete[] cpu;
	}
	cpu = new char[strlen(_cpu) + 1];
	strcpy(cpu, _cpu);
}

void laptop::Set_price(float _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void laptop::Set_production_year(int _production_year)
{
	if (_production_year > 0)
	{
		production_year = _production_year;
	}
}

laptop::~laptop()
{
	delete[] model;
	delete[] oper_syst;
	delete[] cpu;
}