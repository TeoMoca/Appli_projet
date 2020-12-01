#pragma once
#include "pch.h"
#include <vector>

class CLcatalog;
class CLpaiement;

ref class CLcommande
{

	String^ ref, ^dateLivr, ^dateEmis;
	int^ numClient;
	std::vector<CLpaiement*> *paiements;
	std::vector<CLcatalog*> *produits;
	float^ prixHT, ^ TVA, ^ prixTTC;

public: 

	CLcommande(String^, int^, String^, String^, std::vector<CLpaiement*>, std::vector<CLcatalog*>, float^, float^, float^);

	String^ getref();
	int^ getnumClient();
	String^ getdateLivr();
	String^ getdateEmis();
	std::vector<CLpaiement*> getpaiements();
	std::vector<CLcatalog*> getproduits();
	float^ getprixHT();
	float^ getTVA();
	float^ getprixTTC();

	void setref(String^);
	void setnumClient(int^);
	void setdateLivr(String^);
	void setdateEmis(String^);
	void setpaiements(std::vector<CLpaiement*>);
	void setproduits(std::vector<CLcatalog*>);
	void setprixHT(float^);
	void setTVA(float^);
	void setprixTTC(float^);


	


};

