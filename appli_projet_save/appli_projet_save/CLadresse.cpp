#include "CLadresse.h"

CLadresse::CLadresse(): numeroRue(""), codePostal(""), ville("")
{
    //throw gcnew System::NotImplementedException();
}

CLadresse::CLadresse(String^ a, String^ b, String^ c): numeroRue(a), codePostal(b), ville(c)
{
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
