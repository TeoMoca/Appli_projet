#pragma once
#include "stratCRUD.h"

ref class stratPersonnel 
{
public:
	void create(String^, String^, String^, String^, String^, String^) override;
	void read(String^, String^, String^) override;
	void update(String^, String^, String^, String^, String^, int, String^) override;
	void suppr() override;
protected:
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
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
	DataTable^ DS = gcnew DataTable();

};

