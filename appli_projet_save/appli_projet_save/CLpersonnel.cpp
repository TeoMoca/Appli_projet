#include "CLpersonnel.h"
#include "pch.h"

CLpersonnel::CLpersonnel():nom(""), prenom(""), dateEmbauche(""), IDsup(0)
{
    //throw gcnew System::NotImplementedException();
    adresse = nullptr;
}

String^ CLpersonnel::getnom()
{
    //throw gcnew System::NotImplementedException();
    return nom;
}

void CLpersonnel::setnom(String^ str)
{
    //throw gcnew System::NotImplementedException();
    nom = str;
}

String^ CLpersonnel::getprenom()
{
    //throw gcnew System::NotImplementedException();
    return prenom;
}

void CLpersonnel::setprenom(String^ str)
{
    //throw gcnew System::NotImplementedException();
    prenom = str;
}

String^ CLpersonnel::getdateEmbauche()
{
    //throw gcnew System::NotImplementedException();
    return dateEmbauche;
}

void CLpersonnel::setdateEmbauche(String^ str)
{
    //throw gcnew System::NotImplementedException();
    dateEmbauche = str;
}

CLadresse^
CLpersonnel::getadresse()
{
    //throw gcnew System::NotImplementedException();
    return adresse;
}

void CLpersonnel::setadresse(array<String^>^ nouvelleAdresse)
{
    //throw gcnew System::NotImplementedException();
    adresse = gcnew CLadresse;
    adresse->setnumeroRue(nouvelleAdresse[0]);
    adresse->setville(nouvelleAdresse[1]);
    adresse->setcodePostal(nouvelleAdresse[2]);
    adresse->setappartNum(nouvelleAdresse[3]);
}

int^ CLpersonnel::getIDsup()
{
    //throw gcnew System::NotImplementedException();
    return IDsup;
}

void CLpersonnel::setIDsup(int^ nb)
{
    //throw gcnew System::NotImplementedException();
    IDsup = nb;
}
