#pragma once
#include "pch.h"

ref class stratClient:public stratCRUD
{
public:
	void create(array<array<String^>^>^ , array<array<String^>^>^ ,String^ , String^, String^) override;
	void read() override ;
	void update() override;
	void suppr() override;
	
};

