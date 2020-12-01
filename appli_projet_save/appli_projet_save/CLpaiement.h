#pragma once

using namespace System;

class CLpaiement
{

	std::string datePay;
	float montant;
	std::string typePay;

public: 

	CLpaiement(std::string, float, std::string);

	std::string getdatePay();
	float getmontant();
	std::string gettypePay();

	void setdatePay(std::string);
	void setmontant(float);
	void settypePay(std::string);

};

