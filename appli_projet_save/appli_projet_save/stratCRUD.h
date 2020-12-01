#pragma once
using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Data;

ref class stratCRUD
{
public:
	virtual void create() = 0;
	virtual void read() = 0;
	virtual void update() = 0;
	virtual void suppr() = 0;
protected:
	String^ constring;
	String^ cmdclient;
	String^ cmdid;
	String^ cmdpersonnel;
	MySqlConnection^ conDataBase ;
	MySqlCommand^ command;
	MySqlCommand^ commandpersonnel;
	MySqlCommand^ commandid;
	MySqlDataAdapter^ myReader;
	DataTable^ DS;
};



