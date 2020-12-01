#include "CLcatalog.h"
#include "pch.h"

CLcatalog::CLcatalog(int refe, std::string desi, int quant, int seuil, float prix, float tva)
{
	ref = refe;
	designation = desi;
	quantDispo = quant;
	seuilAppro = seuil;
	prixHT = prix;
	TVA = tva;
}

int CLcatalog::getref()
{
	return ref;
}

std::string CLcatalog::getdesignation()
{
	return designation;
}

int CLcatalog::getquantDispo()
{
	return quantDispo;
}

int CLcatalog::getseuilAppro()
{
	return seuilAppro;
}

float CLcatalog::getprixHT()
{
	return prixHT;
}

float CLcatalog::getTVA()
{
	return TVA;
}

void CLcatalog::setref(int refe)
{
	ref = refe;
}

void CLcatalog::setdesignation(std::string desi)
{
	designation = desi;
}

void CLcatalog::setquantDispo(int quant)
{
	quantDispo = quant;
}

void CLcatalog::setseuilAppro(int seuil)
{
	seuilAppro = seuil;
}

void CLcatalog::setprixHT(float prix)
{
	prixHT = prix;
}

void CLcatalog::setTVA(float tva)
{
	TVA = tva;
}
