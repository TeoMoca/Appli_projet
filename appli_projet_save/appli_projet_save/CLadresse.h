#pragma once
#include "pch.h"
using namespace System;

ref class CLadresse
{
public:
	CLadresse();
	CLadresse(String^, String^, String^);
	String^ getnumeroRue();
	void setnumeroRue(String^);
	String^ getcodePostal();
	void setcodePostal(String^);
	String^ getville();
	void setville(String^);
private:
	String^ numeroRue;
	String^ codePostal;
	String^ ville;
};

