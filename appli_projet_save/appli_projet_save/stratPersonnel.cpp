#include "pch.h"

void stratPersonnel::create(array<String^>^ adresse, String^ nom, String^ prenom, String^ embauche) {
	CLpersonnel obj;
	conDataBase->Open();
	obj.setnom(nom);
	obj.setprenom(prenom);
	obj.setadresse(adresse);
	obj.setdateEmbauche(embauche);
	cmdpersonnel = "insert into ADRESSES(ADRESSE) values('" + adresse[0] + "','" + adresse[1] + "','" + adresse[2] + "','" + adresse[3] + "');";
	cmdid = "select id from projetpoo.ADRESSES where ADRESSE='" + adresse[0] + "','" + adresse[1] + "','" + adresse[2] + "','" + adresse[3] + "');";
	MySqlDataReader^ myreader = commandpersonnel->ExecuteReader();
	myreader->Read();
	int^ idadresse = myreader->GetInt32(0);
	cmdpersonnel = "insert into projetpoo.PERSONNEL(IDADR,NOM,PRENOM,DATEEMBAUCHE) values ("+idadresse+"," + nom + "," + prenom + "," + embauche + ");";
	myReader->Fill(DS);
};
void stratPersonnel::read(String^ nom, String^ prenom, String^ embauche) {
	conDataBase->Open();
	cmdclient = "select * from projetpoo.PERSONNEL where NOM = '" + nom + "' and PRENOM = '" + prenom + "' and DATEEMBAUCHE = '" + embauche + "';";
	myReader->Fill(DS);
};
void stratPersonnel::update() {

};
void stratPersonnel::suppr() {

};