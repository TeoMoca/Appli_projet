#include "pch.h"

void stratPersonnel::create(array<String^>^ newadresse, String^ nom, String^ prenom, String^ embauche) {
	CLpersonnel obj;
	//Transformation de l'adresse en Bon type pour CLadresse
	CLadresse^ nouvelleAdressePerso = gcnew CLadresse;

	nouvelleAdressePerso->setnumeroRue(newadresse[0]);
	nouvelleAdressePerso->setnumeroRue(newadresse[1]);
	nouvelleAdressePerso->setnumeroRue(newadresse[2]);
	nouvelleAdressePerso->setnumeroRue(newadresse[3]);

	conDataBase->Open();
	obj.setnom(nom);
	obj.setprenom(prenom);
	obj.setadresse(nouvelleAdressePerso);
	obj.setdateEmbauche(embauche);
	cmdpersonnel = "insert into ADRESSES(ADRESSE) values('" + newadresse[0] + "','" + newadresse[1] + "','" + newadresse[2] + "','" + newadresse[3] + "');";
	cmdid = "select id from projetpoo.ADRESSES where ADRESSE='" + newadresse[0] + "','" + newadresse[1] + "','" + newadresse[2] + "','" + newadresse[3] + "');";
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
	int a;
};
void stratPersonnel::suppr() {

};