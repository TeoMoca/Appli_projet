#include "pch.h"

void stratStock::create( String^ desi, int^ quant, int^ seuil, float^ prix, float^ tva) {
	conDataBase->Open();
	cmdstock = "insert into projetpoo.ARTICLE()";
};
/*
void stratStock::read() {

};
void stratStock::update() {

};*/
/*void stratStock::suppr() {

};*/