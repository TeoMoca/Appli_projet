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
	void setadresseFact(std::string, std::string, std::string);
	std::vector<CLadresse*>* getadresseFact();
	void setadresseLivr(std::string, std::string, std::string);
	std::vector<CLadresse*>* getadresseLivr();
	void setbirthdate(String^);
	String^ getbirthdate();
	void setfirstCommande(String^);
	String^ getfirstCommande();

private:
	int^ numClient;
	String^ nom;
	String^ prenom;
	std::vector<CLadresse*>* adresseFact;
	std::vector<CLadresse*>* adresseLivr;
	String^ birthdate;
	String^ firstCommande;
};

