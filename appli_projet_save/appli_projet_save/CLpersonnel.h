#pragma once
#include "pch.h"
#include "CLadresse.h"

class CLadresse;

class CLpersonnel
{
public:
	CLpersonnel();
	std::string getnom();
	void setnom(std::string);
	std::string getprenom();
	void setprenom(std::string);
	std::string getdateEmbauche();
	void setdateEmbauche(std::string);
	CLadresse* getadresse();
	void setadresse(std::string, std::string, std::string);
	int getIDsup();
	void setIDsup(int);

private:
	std::string nom;
	std::string prenom;
	std::string dateEmbauche;
	CLadresse* adresse;
	int IDsup;
};

