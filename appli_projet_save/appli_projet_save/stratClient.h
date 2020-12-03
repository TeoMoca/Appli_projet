#pragma once
#include "pch.h"

ref class stratClient: public stratCRUD
{
public:
	void create() override {};
	void create(String^ , String^ ,String^, String^, String^, String^, String^, String^, String^) override;
	void read() override {};
	void read(String^, String^, String^) override ;
	void update() override {};
	void update(String^, String^, String^, int) override;
	void suppr() override {};
	void suppr(String^, String^, String^) override;
protected:

};

