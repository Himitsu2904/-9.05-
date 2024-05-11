#pragma once
class academy
{
	int foundation;
	char* name;
	char* address;
	char* profile;
public:
	academy();
	academy(const char* _name);
	academy(const char* _name, const char* _address);	
	academy(const char* _name, const char* _address, const char* _profile);
	academy(const char* _name, const char* _address, const char* _profile, int _foundation);
	void initialize();
	void show();
	const char* Get_name()
	{
		return name;
	}
	const char* Get_address()
	{
		return address;
	}
	const char* Get_profile()
	{
		return profile;
	}
	int Get_foundation()
	{
		return foundation;
	}
	void Set_name(const char* _name);
	void Set_address(const char* _address);
	void Set_profile(const char* _profile);
	void Set_foundation(int _foundation);
	~academy();
};