#pragma once
#include "pch.h"
using namespace System;

ref class CLpersonnel
{
public:
	CLpersonnel();
	String^ getnom();
	void setnom(String^);
	String^ getprenom();
	void setprenom(String^);
	String^ getdateEmbauche();
	void setdateEmbauche(String^);
	CLadresse* getadresse();
	void setadresse(std::string, std::string, std::string);
	int^ getIDsup();
	void setIDsup(int^);

private:
	String^ nom;
	String^ prenom;
	String^ dateEmbauche;
	CLadresse* adresse;
	int^ IDsup;
};

