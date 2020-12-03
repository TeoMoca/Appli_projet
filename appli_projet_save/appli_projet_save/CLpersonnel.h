#pragma once
#include "pch.h"
#include "CLadresse.h"

ref class CLadresse;

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
	String^ getadresse();
	void setadresse(String^);
	int getIDsup();
	void setIDsup(int);

private:
	String^ nom;
	String^ prenom;
	String^ dateEmbauche;
	String^ adresse;
	int IDsup;
};

