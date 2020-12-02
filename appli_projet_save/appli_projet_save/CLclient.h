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
	void setadresseFact(String^);
	String^ getadresseFact();
	void setadresseLivr(String^);
	String^ getadresseLivr();
	void setbirthdate(String^);
	String^ getbirthdate();
	void setfirstCommande(String^);
	String^ getfirstCommande();
private:
	int numClient;
	String^ nom;
	String^ prenom;
	String^ adresseFact;
	String^ adresseLivr;
	String^ birthdate;
	String^ firstCommande;
};

