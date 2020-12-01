#include "CLpersonnel.h"
#include "pch.h"

CLpersonnel::CLpersonnel():nom(""), prenom(""), dateEmbauche(""), IDsup(0)
{
    //throw gcnew System::NotImplementedException();
    adresse = nullptr;
}

std::string CLpersonnel::getnom()
{
    //throw gcnew System::NotImplementedException();
    return nom;
}

void CLpersonnel::setnom(std::string str)
{
    //throw gcnew System::NotImplementedException();
    nom = str;
}

std::string CLpersonnel::getprenom()
{
    //throw gcnew System::NotImplementedException();
    return prenom;
}

void CLpersonnel::setprenom(std::string str)
{
    //throw gcnew System::NotImplementedException();
    prenom = str;
}

std::string CLpersonnel::getdateEmbauche()
{
    //throw gcnew System::NotImplementedException();
    return dateEmbauche;
}

void CLpersonnel::setdateEmbauche(std::string str)
{
    //throw gcnew System::NotImplementedException();
    dateEmbauche = str;
}

CLadresse* CLpersonnel::getadresse()
{
    //throw gcnew System::NotImplementedException();
    return adresse;
}

void CLpersonnel::setadresse(std::string num, std::string city, std::string cp)
{
    //throw gcnew System::NotImplementedException();
    adresse = new CLadresse(num, city, cp);
    
}

int CLpersonnel::getIDsup()
{
    //throw gcnew System::NotImplementedException();
    return IDsup;
}

void CLpersonnel::setIDsup(int nb)
{
    //throw gcnew System::NotImplementedException();
    IDsup = nb;
}
