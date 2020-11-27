#pragma once
using namespace System;
ref class CLcatalog
{

	int^ ref, ^quantDispo, ^seuilAppro;
	String^ designation;
	float^ prixHT, ^TVA;
	
public :

	CLcatalog(int^, String^, int^, int^, float^, float^);

	int^ getref();
	String^ getdesignation();
	int^ getquantDispo();
	int^ getseuilAppro();
	float^ getprixHT();
	float^ getTVA();

	void setref(int^);
	void setdesignation(String^);
	void setquantDispo(int^);
	void setseuilAppro(int^);
	void setprixHT(float^);
	void setTVA(float^);

};

