#pragma once
#include "pch.h"

ref class stratClient:public stratCRUD
{
public:
	void create(array<array<String^>^>^ , array<array<String^>^>^ ,String^ , String^, String^) override;
	void read(String^ nom, String^ prenom, String^ birthdate) override ;
	void update() override;
	void suppr(String^ nom, String^ prenom, String^ birthdate) override;
	
};

