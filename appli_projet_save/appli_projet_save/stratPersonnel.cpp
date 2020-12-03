#include "pch.h"

void stratPersonnel::create(String^ nom, String^ prenom, String^ embauche, String^ rue, String^ ville, String^ CP) {
	CLpersonnel obj;
	obj.setnom(nom);
	obj.setprenom(prenom);
	obj.setadresse(rue);
	obj.setdateEmbauche(embauche);
	conDataBase->Open();
	
	cmdclient = "INSERT INTO projetpoo.ADRESSES (NUM_ET_RUE, VILLE, CP) VALUES('" + rue + "','" + ville + "','" + CP + "');";
	command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	myReader->Fill(DS);

	cmdid = "select IDADR from projetpoo.ADRESSES where NUM_ET_RUE= '" + rue + "' and VILLE = '" + ville + "' and CP='" + CP + "';";
	commandid = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdid, conDataBase);
	MySqlDataReader^ myreader = commandid->ExecuteReader();
	myreader->Read();
	int^ idadresse = myreader->GetInt32(0);
	myreader->Close();
	
	cmdclient = "insert into projetpoo.PERSONNEL(IDADR,NOM,PRENOM,DATEEMBAUCHE) values (" + idadresse + ",'" + nom + "','" + prenom + "','" + embauche + "');";
	command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	myReader->Fill(DS);
};
void stratPersonnel::read(String^ nom, String^ prenom, String^ embauche) {
	conDataBase->Open();
	cmdclient = "select * from projetpoo.PERSONNEL where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and DATEEMBAUCHE = '" + embauche + "';";
	myReader->Fill(DS);
};
void stratPersonnel::update() {
	int a;
};
void stratPersonnel::suppr() {

};