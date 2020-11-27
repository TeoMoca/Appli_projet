#include "pch.h"

using namespace appliprojet;

void stratClient::create() {
	CLclient obj;
	//A mettre dans l'event clickButtonclient
	array<String^>^ adresse_fact,^ adresse_liv;
	String^ nom, ^ prenom, ^ birthdate;

	//Fin 
	obj.setnom(nom);
	obj.setprenom(prenom);
	obj.setadresseFact(adresse_fact);
	obj.setadresseLivr(adresse_liv);
	obj.setbirthdate(birthdate);
	cmdclient = "insert into CLIENT(NOM,PRENOM,BIRTHDATE) values ("+nom+","+prenom+","+birthdate+"); insert into ADRESSES(ADRESSE) values (";
	MySql::Data::MySqlClient::MySqlCommand^ client = gcnew 
	

};
void stratClient::read() {

};
void stratClient::update() {

};
void stratClient::suppr() {

};