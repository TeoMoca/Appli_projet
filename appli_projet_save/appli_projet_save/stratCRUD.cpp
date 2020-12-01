#include "stratCRUD.h"

stratCRUD::stratCRUD()
{
    //throw gcnew System::NotImplementedException();
    constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
    conDataBase = gcnew MySql::Data::MySqlClient::MySqlConnection(constring);
    command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
    commandid = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdid, conDataBase);
    myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
}

