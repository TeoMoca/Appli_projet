#pragma once
#include "pch.h"

ref class stratClient:public stratCRUD
{
public:
	void create() override {};
	void create(String^ , String^ ,String^, String^, String^, String^, String^, String^, String^) override;
	//personnel
	void create(String^, String^, String^, String^, String^, String^) override {};
	//stock
	void create(int, int, String^, String^, String^, String^, String^, int) override {};


	void update() override {};
	void update(String^, String^, String^, int id) override;
	//personnel AND stock
	void update(String^, String^, String^, String^, String^, int, String^) override {};


	void suppr()override {};
	//personnel
	void suppr(int) override {};
};