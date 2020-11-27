#include "CLpaiement.h"

CLpaiement::CLpaiement(String^ date, float^ mont, String^ type)
{
    datePay = date;
    montant = mont;
    typePay = type;
}

String^ CLpaiement::getdatePay()
{
    return datePay;
}

float^ CLpaiement::getmontant()
{
    return montant;
}

String^ CLpaiement::gettypePay()
{
    return typePay;
}
