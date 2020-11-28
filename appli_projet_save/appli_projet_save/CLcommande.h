#pragma once
ref class CLcommande
{

	String^ ref, ^dateLivr, ^dateEmis;
	int^ numClient;
	array<CLpaiement^>^ paiements;
	array<CLcatalog^>^ produits;
	float^ prixHT, ^ TVA, ^ prixTTC;

public: 

	CLcommande(String^, int^, String^, String^, array<CLpaiement^>^, array<CLcatalog^>^, float^, float^, float^);

	String^ getref();
	int^ getnumClient();
	String^ getdateLivr();
	String^ getdateEmis();
	array<CLpaiement^>^ getpaiements();
	array<CLcatalog^>^ getproduits();
	float^ getprixHT();
	float^ getTVA();
	float^ getprixTTC();

	void setref(String^);
	void setnumClient(int^);
	void setdateLivr(String^);
	void setdateEmis(String^);
	void setpaiements(array<CLpaiement^>^);
	void setproduits(array<CLcatalog^>^);
	void setprixHT(float^);
	void setTVA(float^);
	void setprixTTC(float^);


	


};

