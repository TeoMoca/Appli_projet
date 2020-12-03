#pragma once
using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Data;

ref class stratCRUD
{
public:
	virtual void create() = 0;
	virtual void update() = 0;
	virtual void suppr() = 0;
protected:
	String^ constring= L"datasource=192.168.187.140;port=3306;username=r1;password=root";
	String^ cmdclient;
	String^ cmdid;
	String^ cmdpersonnel;
	String^ cmdstock;
	MySqlConnection^ conDataBase = gcnew MySql::Data::MySqlClient::MySqlConnection(constring);
	MySqlCommand^ command= gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	MySqlCommand^ commandstock= gcnew MySql::Data::MySqlClient::MySqlCommand(cmdstock, conDataBase);
	MySqlCommand^ commandpersonnel = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdpersonnel, conDataBase);
	MySqlCommand^ commandid = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdid, conDataBase);
	MySqlDataAdapter^ myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	DataTable^ DS;
};





