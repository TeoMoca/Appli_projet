#pragma once
#include "pch.h"
using namespace System;

class CLadresse
{
public:
	CLadresse();
	CLadresse(std::string, std::string, std::string);
	std::string getnumeroRue();
	void setnumeroRue(std::string);
	std::string getcodePostal();
	void setcodePostal(std::string);
	std::string getville();
	void setville(std::string);
	std::string getappartNum();
	void setappartNum(std::string);
private:
	std::string numeroRue;
	std::string codePostal;
	std::string ville;
	std::string appartNum;
};

