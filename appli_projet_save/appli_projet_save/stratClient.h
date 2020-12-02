#pragma once
#include "pch.h"

ref class stratClient
{
public:
	void create() override {};
	void create(String^ , String^ ,String^) override;
	void read(String^ nom, String^ prenom, String^ birthdate) override ;
	void update() override;
	void suppr(String^ nom, String^ prenom, String^ birthdate) override;
private:
	String^ constring = L"datasource=192.168.187.140;port=3306;username=r1;password=root";
	String^ cmdclient;
	String^ cmdid;
	String^ cmdpersonnel;
	String^ cmdstock;
	MySqlConnection^ conDataBase = gcnew MySql::Data::MySqlClient::MySqlConnection(constring);
	MySqlCommand^ command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	MySqlCommand^ commandstock = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdstock, conDataBase);
	MySqlCommand^ commandpersonnel = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdpersonnel, conDataBase);
	MySqlCommand^ commandid = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdid, conDataBase);
	MySqlDataAdapter^ myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	DataTable^ DS;
};

