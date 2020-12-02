#pragma once
#include "pch.h"

using namespace appliprojet;



void stratClient::create(array<array<String^>^>^ adresse_fact, array<array<String^>^>^ adresse_liv,String^ nom, String^ prenom, String^ birthdate) {
	CLclient^ obj= gcnew CLclient;
	//transformation des adresses en tableau d'adresses du bon format
	// adresse de facturation
	int nAF = 0;
	int iAF = 0;
	for each ( array<String^> ^ nouvelleadresse in adresse_fact) {
		nAF++;
	}
	array<CLadresse^>^ nouvellesAdressesFact = gcnew array<CLadresse^>(nAF);
	for each (array<String^> ^ nouvelleadresse in adresse_fact) {
		nouvellesAdressesFact[iAF]->setnumeroRue(nouvelleadresse[0]);
		nouvellesAdressesFact[iAF]->setville(nouvelleadresse[1]);
		nouvellesAdressesFact[iAF]->setcodePostal(nouvelleadresse[2]);
		iAF++;
	}
	//adresse de livraison
	int nAL = 0;
	int iAL = 0;
	for each (array<String^> ^ nouvelleadresse in adresse_fact) {
		nAL++;
	}
	array<CLadresse^>^ nouvellesAdressesLivr = gcnew array<CLadresse^>(nAL);
	for each (array<String^> ^ nouvelleadresse in adresse_fact) {
		nouvellesAdressesLivr[iAL]->setnumeroRue(nouvelleadresse[0]);
		nouvellesAdressesLivr[iAL]->setville(nouvelleadresse[1]);
		nouvellesAdressesLivr[iAL]->setcodePostal(nouvelleadresse[2]);
		iAL++;
	}
	//
	conDataBase->Open();
	obj->setnom(nom);
	obj->setprenom(prenom);
	obj->setadresseFact(nouvellesAdressesFact);
	obj->setadresseLivr(nouvellesAdressesLivr);
	obj->setbirthdate(birthdate);
	cmdclient = "insert into projetpoo.CLIENT(NOM,PRENOM,BIRTHDATE) values ("+nom+","+prenom+","+birthdate+");";
	myReader->Fill(DS);
	cmdid = "select id from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
	MySqlDataReader^ myreader = command->ExecuteReader();
	myreader->Read();
	int^ idclient = myreader->GetInt32(0);
	int i = 0;
	for each (CLadresse^ adresse_f in obj->getadresseFact()) {
		cmdclient = "INSERT INTO projetpoo.ADRESSES (NUM_ET_RUE, VILLE, CP) VALUES('"+ obj->getadresseFact()[i]->getnumeroRue()+"','" + obj->getadresseFact()[i]->getville() + "','" + obj->getadresseFact()[i]->getcodePostal() + "');";
		cmdid = "select id from projetpoo.ADRESSES where NUM_ET_RUE= '" + obj->getadresseFact()[i]->getnumeroRue() + "' and VILLE = '" + obj->getadresseFact()[i]->getville() + "' and CP='" + obj->getadresseFact()[i]->getcodePostal() + "';";
		MySqlDataReader^ myreader = command->ExecuteReader();
		myreader->Read();
		int^ idadresse = myreader->GetInt32(0);
		cmdclient = "insert into A_PAYE_A(numClient,idadr) values (" + idclient + "," + idadresse + ");";
		i++;
	}
	i = 0;
	for each (CLadresse^ adresse_l in obj->getadresseLivr()) {
		cmdclient = "INSERT INTO projetpoo.ADRESSES (NUM_ET_RUE, VILLE, CP) VALUES('" + obj->getadresseLivr()[i]->getnumeroRue() + "','" + obj->getadresseLivr()[i]->getville() + "','" + obj->getadresseLivr()[i]->getcodePostal() + "');";
		cmdid = "select id from projetpoo.ADRESSES where NUM_ET_RUE= '" + obj->getadresseLivr()[i]->getnumeroRue() + "' and VILLE = '" + obj->getadresseLivr()[i]->getville() + "' and CP='" + obj->getadresseLivr()[i]->getcodePostal() + "';";
		MySqlDataReader^ myreader = command->ExecuteReader();
		myreader->Read();
		int^ idadresse = myreader->GetInt32(0);
		cmdclient = "insert into EST_LIVRE_A(numClient,idadr) values (" + idclient + "," + idadresse + ");";
		i++;
	}
};
void stratClient::read(String^ nom, String^ prenom, String^ birthdate) {
	conDataBase->Open();
	cmdclient = "select * from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
	myReader->Fill(DS);
};
void stratClient::update() {
	cmdclient = "";
};
void stratClient::suppr(String^ nom, String^ prenom, String^ birthdate) {
	CLclient suppr;
	cmdid = "select id from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
	MySqlDataReader^ myreader = command->ExecuteReader();
	myreader->Read();
	int^ idclient = myreader->GetInt32(0);
	array<int^>^ adrs;
	cmdclient = "delete from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";

};