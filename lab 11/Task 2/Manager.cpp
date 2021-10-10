#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager():Person()
{
	instance = nullptr;
	clientarray = nullptr;
	totalclients = 0;
}
Manager::Manager(Manager* ins, Client* ca, int tc, char* n, char* c, char* a) :Person(n, c, a)
{
	instance = ins;
	clientarray = ca;
	totalclients = tc;
}
Manager::Manager(Manager& ref):Person(ref)
{
	instance = ref.instance;
	clientarray = ref.clientarray;
	totalclients = ref.totalclients;
}
void Manager::Add_Client(Client* o)
{
	totalclients += 1;
	clientarray = new Client[totalclients];
	for (int i = 0; i < totalclients; ++i)
		clientarray[i] = o[i];
	cout << totalclients << endl;

}
void Manager::Remove_Client(Client* o)
{
	int position;
	int flag = 0;

	for (int i = 0; i < totalclients; i++) {
		if (clientarray[i] == o[i]) {
			flag = 1;
			position = i;
			break;
		}
	}
	if (flag == 1) {
		for (int i = position; i < totalclients - 1; i++) {
			clientarray[i] = clientarray[i + 1];
		}
		totalclients -= 1;
		cout << "Total Clients Remaining: " << totalclients << endl;
	}
	else {
		cout << "number not found in array.!!" << endl;
	}
}
//void Manager::Display_All_Clients()
//{
//	for (int i = 0; i < totalclients; i++) {
//		cout << clientarray[i] << endl;
//	}
//}
void Manager::Display()
{
	Person::Display();
	cout << "instance: " << instance << endl;
	cout << "Client Array: " << clientarray << endl;
	cout << "Total Clients: " << totalclients << endl;
}
Manager::~Manager(){}
