#pragma once
class laptop
{
	float price;
	int production_year;
	char* model;
	char* oper_syst;
	char* cpu;
public:

	laptop();
	laptop(const char* _model);
	laptop(const char* _model, const char* _oper_syst);
	laptop(const char* _model, const char* _oper_syst, const char* _cpu);
	laptop(const char* _model, const char* _oper_syst, const char* _cpu, int _production_year);
	laptop(const char* _model, const char* _oper_syst, const char* _cpu, int _production_year, float _price);
	void initialize();
	void show();
	const char* Get_model()
	{
		return model;
	}
	const char* Get_oper_syst()
	{
		return oper_syst;
	}
	const char* Get_cpu()
	{
		return cpu;
	}
	float Get_price()
	{
		return price;
	}
	int Get_production_year()
	{
		return production_year;
	}
	void Set_model(const char* _model);
	void Set_oper_syst(const char* _oper_syst);
	void Set_cpu(const char* _cpu);
	void Set_price(float _price);
	void Set_production_year(int _production_year);
	~laptop();
};

