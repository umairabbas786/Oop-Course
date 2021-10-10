#pragma once
class MobileNetwork
{
private:
	char* name;
	int mobilenum;
	char*type;
	float balance;
	float callrate;
public:
	MobileNetwork();
	MobileNetwork(char*, int, char*, float, float);
	void Set_Name(char*);
	void Set_Number(int);
	void Set_Type(char*);
	void Set_Balance(float);
	void Set_CallRate(float);
	char* Get_Name();
	int Get_Number();
	char* Get_Type();
	float Get_Balance();
	float Get_CallRae();
	void Recharge();
	void Discharge();
	void CheckBalance();
	void CallCharges();
};

