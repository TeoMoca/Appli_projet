#pragma once
#include<Vector>
using namespace System;

ref class CLclient
{
public:
	CLclient();
private:
	int^ numClient;
	String^ nom;
	String^ prenom;
	array<String^>^ adresseFact;
	array<String^>^ adresseLivr;
	String^ birthdate;
	String^ firstCommande;

};

