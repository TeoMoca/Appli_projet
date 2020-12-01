#include "CLcommande.h"
#include "pch.h"

CLcommande::CLcommande(String^ refe, int^ num, String^ liv, String^ emi, std::vector<CLpaiement*> paie, std::vector<CLcatalog*> prod, float^ ht, float^ tva, float^ ttc)
{
    ref = refe;
    numClient = num;
    dateLivr = liv;
    dateEmis = emi;
    *paiements = paie;
    *produits = prod;
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

std::vector<CLpaiement*> CLcommande::getpaiements()
{
    return *paiements;
}

std::vector<CLcatalog*> CLcommande::getproduits()
{
    return *produits;
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

void CLcommande::setref(String^ refe)
{
    ref = refe;
}

void CLcommande::setnumClient(int^ num)
{
    numClient = num;
}

void CLcommande::setdateLivr(String^ liv)
{
    dateLivr = liv;
}

void CLcommande::setdateEmis(String^ emi)
{
    dateEmis = emi;
}

void CLcommande::setpaiements(std::vector<CLpaiement*> paie)
{
    *paiements = paie;
}

void CLcommande::setproduits(std::vector<CLcatalog*> prod)
{
    *produits = prod;
}

void CLcommande::setprixHT(float^ ht)
{
    prixHT = ht;
}

void CLcommande::setTVA(float^ tva)
{
    TVA = tva;
}

void CLcommande::setprixTTC(float^ ttc)
{
    prixTTC = ttc;
}
