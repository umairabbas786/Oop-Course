#pragma once
#include "Person.h"
#include "Client.h"
class Manager:public Person
{
private:
	static Client* clientarray;
	static Manager* instance;
	static int totalclients;
public:
	Manager();
	Manager(Manager*,Client*,int,char*,char*,char*);
	Manager(Manager&);
	void Add_Client(Client*);
	void Remove_Client(Client*);
	/*void Display_All_Clients();*/
	void Display();
	~Manager();
};

