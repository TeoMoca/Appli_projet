#include "CLclient.h"

CLclient::CLclient() : numClient(0), nom(""), prenom(""), birthdate(""), firstCommande("")
{
	adresseFact = nullptr;
	adresseLivr = nullptr;
}

void CLclient::setnumClient(int a)
{
	//throw gcnew System::NotImplementedException();
	numClient = a;
}

int CLclient::getnumClient()
{
	//throw gcnew System::NotImplementedException();
	return numClient;
}

void CLclient::setnom(String^ nouveaunom)
{
	//throw gcnew System::NotImplementedException();
	nom = nouveaunom;
}

String^ CLclient::getnom()
{
	//throw gcnew System::NotImplementedException();
	return nom;
}

void CLclient::setprenom(String^ nouveauprenom)
{
	//throw gcnew System::NotImplementedException();
	prenom = nouveauprenom;
}

String^ CLclient::getprenom()
{
	//throw gcnew System::NotImplementedException();
	return prenom;
}

void CLclient::setadresseFact(array<CLadresse^>^ handle)
{
	//throw gcnew System::NotImplementedException();
	
	adresseFact = handle;
		
}

array<CLadresse^>^ CLclient::getadresseFact()
{
	//throw gcnew System::NotImplementedException();
	return adresseFact;
}


void CLclient::setadresseLivr(array<CLadresse^>^ handle)
{
	//throw gcnew System::NotImplementedException();
	adresseLivr = handle;
	
		
}

array<CLadresse^>^ CLclient::getadresseLivr()
{
	//throw gcnew System::NotImplementedException();
	return adresseLivr;
}

void CLclient::setbirthdate(String^ str)
{
	//throw gcnew System::NotImplementedException();
	birthdate = str;
}

String^ CLclient::getbirthdate()
{
	//throw gcnew System::NotImplementedException();
	return birthdate;
}

void CLclient::setfirstCommande(String^ str)
{
	//throw gcnew System::NotImplementedException();
	firstCommande = str;
}

String^ CLclient::getfirstCommande()
{
	//throw gcnew System::NotImplementedException();
	return firstCommande;
}
