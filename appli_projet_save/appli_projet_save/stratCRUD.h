#pragma once
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class stratCRUD
{
public:
	stratCRUD();
	virtual void create() =0;
	virtual void read() = 0;
	virtual void update() = 0;
	virtual void suppr() = 0;
protected:
	String^ constring;
	String^ cmdclient;
	MySqlConnection^ conDataBase ;
	MySqlCommand^ command;
	MySqlDataAdapter^ myReader;
	DataTable^ DS = gcnew DataTable();
};



