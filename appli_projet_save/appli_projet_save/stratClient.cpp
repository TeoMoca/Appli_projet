#include "pch.h"

using namespace appliprojet;

void stratClient::create(array<array<String^>^>^ adresse_fact, array<array<String^>^>^ adresse_liv,String^ nom, String^ prenom, String^ birthdate) {
	CLclient obj;
	conDataBase->Open();
	obj.setnom(nom);
	obj.setprenom(prenom);
	obj.setadresseFact(adresse_fact);
	obj.setadresseLivr(adresse_liv);
	obj.setbirthdate(birthdate);
	cmdclient = "insert into projetpoo.CLIENT(NOM,PRENOM,BIRTHDATE) values ("+nom+","+prenom+","+birthdate+"); insert into ADRESSES(ADRESSE) values ();";
	myReader->Fill(DS);
	cmdidclient = "select id from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
	MySqlDataReader^ myreader = command->ExecuteReader();
	myreader->Read();
	int^ idclient = myreader->GetInt32(0);

	//MyForm->collection->label4->Text = idclient;
};
void stratClient::read(String^ nom, String^ prenom, String^ birthdate) {
	CLclient read;
	cmdclient = "select * from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
};
void stratClient::update() {

};
void stratClient::suppr(String^ nom, String^ prenom, String^ birthdate) {
	CLclient suppr;
	cmdclient = "delete from projetpoo.CLIENT where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and BIRTHDATE = '" + birthdate + "';";
};