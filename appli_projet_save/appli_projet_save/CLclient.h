#pragma once
#include "pch.h"
#include "CLadresse.h"
#include<Vector>
using namespace System;

ref class CLadresse;

ref class CLclient
{
public:
	CLclient();
	void setnumClient(int);
	int getnumClient();
	void setnom(String^);
	String^ getnom();
	void setprenom(String^);
	String^ getprenom();
	void setadresseFact(array<CLadresse^>^);
	array<CLadresse^>^ getadresseFact();
	void setadresseLivr(array<CLadresse^>^);
	array<CLadresse^>^ getadresseLivr();
	void setbirthdate(String^);
	String^ getbirthdate();
	void setfirstCommande(String^);
	String^ getfirstCommande();
private:
	int numClient;
	String^ nom;
	String^ prenom;
	array<CLadresse^>^ adresseFact;
	array<CLadresse^>^ adresseLivr;
	String^ birthdate;
	String^ firstCommande;
};

