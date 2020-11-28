#include "CLadresse.h"

CLadresse::CLadresse(): numeroRue(""), codePostal(""), ville(""), appartNum("")
{
    //throw gcnew System::NotImplementedException();
}

String^ CLadresse::getnumeroRue()
{
    //throw gcnew System::NotImplementedException();
    return numeroRue;
}

void CLadresse::setnumeroRue(String^ str)
{
    //throw gcnew System::NotImplementedException();
    numeroRue = str;
}

String^ CLadresse::getcodePostal()
{
    //throw gcnew System::NotImplementedException();
    return codePostal;
}

void CLadresse::setcodePostal(String^ str)
{
    //throw gcnew System::NotImplementedException();
    codePostal = str;
}

String^ CLadresse::getville()
{
    //throw gcnew System::NotImplementedException();
    return ville;
}

void CLadresse::setville(String^ str)
{
    //throw gcnew System::NotImplementedException();
    ville = str;

}

String^ CLadresse::getappartNum()
{
    //throw gcnew System::NotImplementedException();
    return appartNum;
}

void CLadresse::setappartNum(String^ str)
{
    //throw gcnew System::NotImplementedException();
    appartNum = str;
}
