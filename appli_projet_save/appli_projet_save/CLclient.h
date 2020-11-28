#pragma once
#include "pch.h"
#include<Vector>
using namespace System;

ref class CLclient
{
public:
	CLclient();
	void setnumClient(int^);
	int^ getnumClient();
	void setnom(String^);
	String^ getnom();
	void setprenom(String^);
	String^ getprenom();
	void setadresseFact(array<array<String^>^>^);
	array<CLadresse^>^ getadresseFact();
	void setadresseLivr(array<array<String^>^>^);
	array<CLadresse^>^ getadresseLivr();
	void setbirthdate(String^);
	String^ getbirthdate();
	void setfirstCommande(String^);
	String^ getfirstCommande();

private:
	int^ numClient;
	String^ nom;
	String^ prenom;
	array<CLadresse^>^ adresseFact;
	array<CLadresse^>^ adresseLivr;
	String^ birthdate;
	String^ firstCommande;
};

