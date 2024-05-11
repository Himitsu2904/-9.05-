#include "student.h"
#include "academy.h"
#include "laptop.h"
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	student stud("Соболев И. В.", "12.05.2003", "096 643 1342", 232);
	stud.show();
	cout << endl << endl;
	stud.Set_FIO("Артемьев К. Р.");
	stud.Set_academy_name("IT Step Shcool");
	stud.show();
	cout << endl << "-----------------------------------------------" << endl;
	academy educ("Одесская политехника", "проспект Шевченка, 1", "IT", 2018);
	educ.show();
	cout << endl << endl;
	educ.Set_name("Одесская юридическая академия");
	educ.Set_address("улица Академическая, 2");
	educ.Set_foundation(1997);
	educ.show();
	cout << endl << "-----------------------------------------------" << endl;
	laptop comp("ASUS","Windows");
	comp.show();
	cout << endl << endl;
	comp.Set_cpu("Radeon RX 580");
	comp.Set_price(12000);
	comp.show();
}