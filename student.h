#pragma once
class student
{
	int group;
	char* FIO;
	char* birthday;
	char* telephone;
	char* city;
	char* country;
	char* academy_name;
public:
	student();
	student(const char* _FIO, const char* _birthday, const char* _telephone, int _group);
	student(const char* _FIO, const char* _birthday, const char* _telephone, const char* _city, const char* _country, const char* _academy_name, int _group);
	void initialize();
	void show();
	const char* Get_FIO()
	{
		return FIO;
	}
	const char* Get_birthday()
	{
		return birthday;
	}
	const char* Get_telephone()
	{
		return telephone;
	}
	const char* Get_city()
	{
		return city;
	}
	const char* Get_country()
	{
		return country;
	}
	const char* Get_academy_name()
	{
		return academy_name;
	}
	int Get_group()
	{
		return group;
	}
	void Set_FIO(const char* _FIO);
	void Set_birthday(const char* _birthday);
	void Set_telephone(const char* _telephone);
	void Set_city(const char* _city);
	void Set_country(const char* _country);
	void Set_academy_name(const char* _academy_name);
	void Set_group(int _group);
	~student();
};