#include "CLadresse.h"

CLadresse::CLadresse(): numeroRue(""), codePostal(""), ville(""), appartNum("")
{
    //throw gcnew System::NotImplementedException();
}

CLadresse::CLadresse(std::string a, std::string b, std::string c): numeroRue(a), codePostal(b), ville(c)
{
}

std::string CLadresse::getnumeroRue()
{
    //throw gcnew System::NotImplementedException();
    return numeroRue;
}

void CLadresse::setnumeroRue(std::string str)
{
    //throw gcnew System::NotImplementedException();
    numeroRue = str;
}

std::string CLadresse::getcodePostal()
{
    //throw gcnew System::NotImplementedException();
    return codePostal;
}

void CLadresse::setcodePostal(std::string str)
{
    //throw gcnew System::NotImplementedException();
    codePostal = str;
}

std::string CLadresse::getville()
{
    //throw gcnew System::NotImplementedException();
    return ville;
}

void CLadresse::setville(std::string str)
{
    //throw gcnew System::NotImplementedException();
    ville = str;

}

std::string CLadresse::getappartNum()
{
    //throw gcnew System::NotImplementedException();
    return appartNum;
}

void CLadresse::setappartNum(std::string str)
{
    //throw gcnew System::NotImplementedException();
    appartNum = str;
}
