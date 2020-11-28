#pragma once
#include "pch.h"
using namespace System;

ref class CLadresse
{
public:
	CLadresse();
	String^ getnumeroRue();
	void setnumeroRue(String^);
	String^ getcodePostal();
	void setcodePostal(String^);
	String^ getville();
	void setville(String^);
	String^ getappartNum();
	void setappartNum(String^);
private:
	String^ numeroRue;
	String^ codePostal;
	String^ ville;
	String^ appartNum;
};

