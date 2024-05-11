#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <iostream>
using namespace std;

student::student()
{
	FIO = new char[4];
	strcpy(FIO, "---");
	birthday = new char[4];
	strcpy(birthday, "---");
	telephone = new char[4];
	strcpy(telephone, "---");
	city = new char[4];
	strcpy(city, "---");
	country = new char[4];
	strcpy(country, "---");
	academy_name = new char[4];
	strcpy(academy_name, "---");
	group = 0;
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone, int _group)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
	city = new char[4];
	strcpy(city, "---");
	country = new char[4];
	strcpy(country, "---");
	academy_name = new char[4];
	strcpy(academy_name, "---");
	group = _group;
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone, const char* _city, const char* _country, const char* _academy_name, int _group)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
	city = new char[strlen(_city) + 1];
	strcpy(city, _city);
	country = new char[strlen(_country) + 1];
	strcpy(country, _country);
	academy_name = new char[strlen(_academy_name) + 1];
	strcpy(academy_name, _academy_name);
	group = _group;
}

void student::initialize()
{
	char buff[100];
	cout << "Введите ФИО: "; gets_s(buff, 100);
	FIO = new char[strlen(buff) + 1];
	strcpy(FIO, buff);
	cout << "Введите дату рождения: ";  gets_s(buff, 100);
	birthday = new char[strlen(buff) + 1];
	strcpy(birthday, buff);
	cout << "Введите контактный номер: ";  gets_s(buff, 100);
	telephone = new char[strlen(buff) + 1];
	strcpy(telephone, buff);
	cout << "Введите город: ";  gets_s(buff, 100);
	city = new char[strlen(buff) + 1];
	strcpy(city, buff);
	cout << "Введите страну: ";  gets_s(buff, 100);
	country = new char[strlen(buff) + 1];
	strcpy(country, buff);
	cout << "Введите контактный название учебного заведения: ";  gets_s(buff, 100);
	academy_name = new char[strlen(buff) + 1];
	strcpy(academy_name, buff);
	cout << "Введите группу: "; cin >> group;
}

void student::show()
{
	cout << "\tДанные про студента:";
	cout << "\nФИО: " << FIO;
	cout << "\nДата рождения: " << birthday;
	cout << "\nКонтактный телефон: " << telephone;
	cout << "\nГород: " << city;
	cout << "\nСтрана: " << country;
	cout << "\nНазвание учебного заведения: " << academy_name;
	cout << "\nГруппа: " << group;
}

void student::Set_FIO(const char* _FIO)
{
	if (FIO != nullptr)
	{
		delete[] FIO;
	}
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
}

void student::Set_birthday(const char* _birthday)
{
	if (birthday != nullptr)
	{
		delete[] birthday;
	}
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
}

void student::Set_telephone(const char* _telephone)
{
	if (telephone != nullptr)
	{
		delete[] telephone;
	}
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
}

void student::Set_city(const char* _city)
{
	if (city != nullptr)
	{
		delete[] city;
	}
	city = new char[strlen(_city) + 1];
	strcpy(city, _city);
}

void student::Set_country(const char* _country)
{
	if (country != nullptr)
	{
		delete[] country;
	}
	country = new char[strlen(_country) + 1];
	strcpy(country, _country);
}

void student::Set_academy_name(const char* _academy_name)
{
	if (academy_name != nullptr)
	{
		delete[] academy_name;
	}
	academy_name = new char[strlen(_academy_name) + 1];
	strcpy(academy_name, _academy_name);
}

void student::Set_group(int _group)
{
	if (_group>0)
	{
		group = _group;
	}
}

student::~student()
{
	delete[] FIO;
	delete[] birthday;
	delete[] telephone;
	delete[] city;
	delete[] country;
	delete[] academy_name;
}