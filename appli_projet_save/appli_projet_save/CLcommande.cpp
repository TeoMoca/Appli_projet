#include "CLcommande.h"
#include "pch.h"

CLcommande::CLcommande(String^ refe, int^ num, String^ liv, String^ emi, array<CLpaiement^>^ paie, array<CLcatalog^>^ prod, float^ ht, float^ tva, float^ ttc)
{
    ref = refe;
    numClient = num;
    dateLivr = liv;
    dateEmis = emi;
    paiements = paie;
    produits = prod;
    prixHT = ht;
    TVA = tva;
    prixTTC = ttc;
}

String^ CLcommande::getref()
{
    return ref;
}

int^ CLcommande::getnumClient()
{
    return numClient;
}

String^ CLcommande::getdateLivr()
{
    return dateLivr;
}

String^ CLcommande::getdateEmis()
{
    return dateEmis;
}

array<CLpaiement^>^ CLcommande::getpaiements()
{
    return paiements;
}

array<CLcatalog^>^ CLcommande::getproduits()
{
    return produits;
}

float^ CLcommande::getprixHT()
{
    return prixHT;
}

float^ CLcommande::getTVA()
{
    return TVA;
}

float^ CLcommande::getprixTTC()
{
    return prixTTC;
}
