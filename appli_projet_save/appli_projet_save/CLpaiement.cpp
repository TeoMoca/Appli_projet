#include "CLpaiement.h"
#include "pch.h"

CLpaiement::CLpaiement(String^ date, float mont, String^ type)
{
    datePay = date;
    montant = mont;
    typePay = type;
}

String^ CLpaiement::getdatePay()
{
    return datePay;
}

float CLpaiement::getmontant()
{
    return montant;
}

String^ CLpaiement::gettypePay()
{
    return typePay;
}

void CLpaiement::setdatePay(String^ date)
{
    datePay = date;
}

void CLpaiement::setmontant(float mont)
{
    montant = mont;
}

void CLpaiement::settypePay(String^ type)
{
    typePay = type;
}
