#include "pch.h"

using namespace appliprojet;

void stratClient::create(array<array<String^>^>^ adresse_fact, array<array<String^>^>^ adresse_liv,String^ nom, String^ prenom, String^ birthdate) {
	CLclient obj;
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
	obj.setnom(nom);
	obj.setprenom(prenom);
	obj.setadresseFact(nouvellesAdressesFact);
	obj.setadresseLivr(nouvellesAdressesLivr);
	obj.setbirthdate(birthdate);
	cmdclient = "insert into projetpoo.CLIENT(NOM,PRENOM,BIRTHDATE) values ("+nom+","+prenom+","+birthdate+");";
	myReader->Fill(DS);
	cmdid = "select id from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
	MySqlDataReader^ myreader = command->ExecuteReader();
	myreader->Read();
	int^ idclient = myreader->GetInt32(0);

	for each (array<String^> ^ adresse_f in adresse_fact) {
		cmdclient = "insert into ADRESSES(ADRESSE) values('"+adresse_f[0]+"','" + adresse_f[1] + "','" + adresse_f[2] + "','" + adresse_f[3] + "');";
		cmdid = "select id from projetpoo.ADRESSES where ADRESSE='" + adresse_f[0] + "','" + adresse_f[1] + "','" + adresse_f[2] + "','" + adresse_f[3] + "');";
		MySqlDataReader^ myreader = command->ExecuteReader();
		myreader->Read();
		int^ idadresse = myreader->GetInt32(0);
		cmdclient = "insert into A_PAYE_A(numClient,idadr) values (" + idclient + "," + idadresse + ");";

	}
	for each (array<String^> ^ adresse_l in adresse_liv) {
		cmdclient = "insert into ADRESSES(ADRESSE) values('" + adresse_l[0] + "','" + adresse_l[1] + "','" + adresse_l[2] + "','" + adresse_l[3] + "',);";
		cmdid = "select id from projetpoo.ADRESSES where ADRESSE='" + adresse_l[0] + "','" + adresse_l[1] + "','" + adresse_l[2] + "','" + adresse_l[3] + "');";
		MySqlDataReader^ myreader = command->ExecuteReader();
		myreader->Read();
		int^ idadresse = myreader->GetInt32(0);
		cmdclient = "insert into ESL_LIVRE_A(numClient,idadr) values (" + idclient + "," + idadresse + ");";
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
/*void stratClient::suppr(String^ nom, String^ prenom, String^ birthdate) {
	CLclient suppr;
	cmdid = "select id from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
	MySqlDataReader^ myreader = command->ExecuteReader();
	myreader->Read();
	int^ idclient = myreader->GetInt32(0);
	array<int^>^ adrs;
	cmdclient = "delete from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";

};*/