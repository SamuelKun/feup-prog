#include <iostream>
using namespace std;

#include "Address.h"
#include "Agency.h"
#include "Client.h"
#include "Date.h"
#include "Packet.h"



Agency NiceHolydays("agency.txt");

unsigned mainMenu(Agency agency)
{
	char menu;
	cout << "Main Menu" << endl <<  endl;

	cout << "[1] Manage Clients" << endl;
	cout << "[2] Manage Packs" << endl;
	cout << "[3] View Information " << endl;
	cout << "[4] Buy Packs " << endl;

	
	cin >> menu;

	switch (menu)
	{
	case('1'):

		break;

	case('2'):

		break;

	}


  

  
  return 0;
}

void manageClients()
{
	char menu;

	system("CLS");     //Clear Screen

	cout << "[1] Adicionar clientes " << endl;
	cout << "[2] Remover clientes " << endl;

	cin >> menu;


	switch (menu)
	{
	case('1'):          //Add Clients

		break;
	case('2'):          //Remove Clients

		break;
	}

}

void managePacks()
{
	char menu;

	system("CLS");    //Clear Screen
	cout << "Introduza a operacao que deseja efetuar  " << endl << endl;

	cout << "[1] Add Packs " << endl;
	cout << "[2] Remove Packs " << endl;

	cin >> menu;

	switch (menu)
	{
	case('1'):          //Add Packs

		break;
	case('2'):          //Remove packs

		break;
	}

}

void viewInformation()
{
	char menu;

	system("CLS");    //Clear Screen

	cout << "[1] View Clients " << endl;
	cout << "[2] View Packs " << endl;
	cout << "[3] View the ammount of packs sold and earned currency " << endl;
	
	cin >> menu;

	switch (menu)
	{
	case('1'):        //View Clients

		break;

	case('2'):        //View Packs

		break;
	case('3'):        //View the ammount of packs sold and earned currency

		break;
	}
}

void viewClietns