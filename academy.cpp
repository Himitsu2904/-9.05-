#define _CRT_SECURE_NO_WARNINGS
#include "academy.h"
#include <iostream>
using namespace std;

academy::academy()
{
	name = new char[4];
	strcpy(name, "---");
	address = new char[4];
	strcpy(address, "---");
	profile = new char[4];
	strcpy(profile, "---");
	foundation = 0;
}

academy::academy(const char* _name)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	address = new char[4];
	strcpy(address, "---");
	profile = new char[4];
	strcpy(profile, "---");
	foundation = 0;
}

academy::academy(const char* _name, const char* _address)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	address = new char[strlen(_address) + 1];
	strcpy(address, _address);
	profile = new char[4];
	strcpy(profile, "---");
	foundation = 0;
}

academy::academy(const char* _name, const char* _address, const char* _profile)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	address = new char[strlen(_address) + 1];
	strcpy(address, _address);
	profile = new char[strlen(_profile) + 1];
	strcpy(profile, _profile);
	foundation = 0;
}

academy::academy(const char* _name, const char* _address, const char* _profile, int _foundation)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	address = new char[strlen(_address) + 1];
	strcpy(address, _address);
	profile = new char[strlen(_profile) + 1];
	strcpy(profile, _profile);
	foundation = _foundation;
}

void academy::initialize()
{
	char buff[100];
	cout << "������� �������� ��������: "; gets_s(buff, 100);
	name = new char[strlen(buff) + 1];
	strcpy(name, buff);
	cout << "������� ������ ��������: ";  gets_s(buff, 100);
	address = new char[strlen(buff) + 1];
	strcpy(address, buff);
	cout << "������� �����, �� ������� �������� ������� ������������: ";  gets_s(buff, 100);
	profile = new char[strlen(buff) + 1];
	strcpy(profile, buff);
	cout << "������� ��� ��������� ��������: "; cin >> foundation;
}

void academy::show()
{
	cout << "\t������ ��� ��������:";
	cout << "\n��������: " << name;
	cout << "\n�����: " << address;
	cout << "\n�������, �� ������� ������� ������������: " << profile;
	cout << "\n��� ��������� ��������: " << foundation;
}

void academy::Set_name(const char* _name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

void academy::Set_address(const char* _address)
{
	if (address != nullptr)
	{
		delete[] address;
	}
	address = new char[strlen(_address) + 1];
	strcpy(address, _address);
}

void academy::Set_profile(const char* _profile)
{
	if (profile != nullptr)
	{
		delete[] profile;
	}
	profile = new char[strlen(_profile) + 1];
	strcpy(profile, _profile);
}

void academy::Set_foundation(int _foundation)
{
	if (_foundation > 0)
	{
		foundation = _foundation;
	}
}

academy::~academy()
{
	delete[] name;
	delete[] address;
	delete[] profile;
}