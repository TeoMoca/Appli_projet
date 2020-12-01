#pragma once
#include "pch.h"
using namespace System;
class CLcatalog
{

	int ref, quantDispo, seuilAppro;
	std::string designation;
	float prixHT, TVA;
	
public :

	CLcatalog(int, std::string, int, int, float, float);

	int getref();
	std::string getdesignation();
	int getquantDispo();
	int getseuilAppro();
	float getprixHT();
	float getTVA();

	void setref(int);
	void setdesignation(std::string);
	void setquantDispo(int);
	void setseuilAppro(int);
	void setprixHT(float);
	void setTVA(float);

};

