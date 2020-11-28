#include "CLclient.h"

CLclient::CLclient() : numClient(0), nom(""), prenom(""), birthdate(""), firstCommande("")
{
	adresseFact = nullptr;
	adresseLivr = nullptr;
}

void CLclient::setnumClient(int^ a)
{
	//throw gcnew System::NotImplementedException();
	numClient = a;
}

int^ CLclient::getnumClient()
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

void CLclient::setadresseFact(array<array<String^>^>^ nouvellesAdressesFact)
{
	//throw gcnew System::NotImplementedException();
	int n = 0;
		for each (array<String^> ^ nouvelleAdresseFact in nouvellesAdressesFact) {
			n++;
		}
		adresseFact = gcnew array<CLadresse^>(n);
	int i = 0;
	for each (array<String^> ^ nouvelleAdresseFact in nouvellesAdressesFact) {
		adresseFact[i] = gcnew CLadresse;
		adresseFact[i]->setnumeroRue(nouvelleAdresseFact[0]);
		adresseFact[i]->setville(nouvelleAdresseFact[1]);
		adresseFact[i]->setcodePostal(nouvelleAdresseFact[2]);
		adresseFact[i]->setappartNum(nouvelleAdresseFact[3]);
		i++;
	}
}

array<CLadresse^>^ CLclient::getadresseFact()
{
	//throw gcnew System::NotImplementedException();
	return adresseFact;
}

void CLclient::setadresseLivr(array<array<String^>^>^ nouvellesAdressesLivr)
{
	//throw gcnew System::NotImplementedException();
	int n = 0;
	for each (array<String^> ^ nouvelleAdresseLivr in nouvellesAdressesLivr) {
		n++;
	}
	adresseLivr = gcnew array<CLadresse^>(n);
	int i = 0;
	for each (array<String^> ^ nouvelleAdresseLivr in nouvellesAdressesLivr) {
		adresseLivr[i] = gcnew CLadresse;
		adresseLivr[i]->setnumeroRue(nouvelleAdresseLivr[0]);
		adresseLivr[i]->setville(nouvelleAdresseLivr[1]);
		adresseLivr[i]->setcodePostal(nouvelleAdresseLivr[2]);
		adresseLivr[i]->setappartNum(nouvelleAdresseLivr[3]);
		i++;
	}
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
