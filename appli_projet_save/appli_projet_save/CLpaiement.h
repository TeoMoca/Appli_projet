#pragma once

using namespace System;

ref class CLpaiement
{

	String^ datePay;
	float^ montant;
	String^ typePay;

public: 

	CLpaiement(String^, float^, String^);

	String^ getdatePay();
	float^ getmontant();
	String^ gettypePay();

	void setdatePay(String^);
	void setmontant(float^);
	void settyePay(String^);

};

