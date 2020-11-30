#include "pch.h"

using namespace appliprojet;

void stratClient::create(array<array<String^>^>^ adresse_fact, array<array<String^>^>^ adresse_liv,String^ nom, String^ prenom, String^ birthdate) {
	CLclient obj;
	String^ test;
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
	String^ idclient = myreader->GetString(0);

	//MyForm->collection->label4->Text = idclient;
};
void stratClient::read() {

};
void stratClient::update() {

};
void stratClient::suppr() {

};