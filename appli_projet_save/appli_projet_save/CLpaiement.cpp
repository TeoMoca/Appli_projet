#include "CLpaiement.h"
#include "pch.h"

CLpaiement::CLpaiement(std::string date, float mont, std::string type)
{
    datePay = date;
    montant = mont;
    typePay = type;
}

std::string CLpaiement::getdatePay()
{
    return datePay;
}

float CLpaiement::getmontant()
{
    return montant;
}

std::string CLpaiement::gettypePay()
{
    return typePay;
}

void CLpaiement::setdatePay(std::string date)
{
    datePay = date;
}

void CLpaiement::setmontant(float mont)
{
    montant = mont;
}

void CLpaiement::settypePay(std::string type)
{
    typePay = type;
}
