#pragma once
#include "pch.h"

ref class stratStock
{
public:
	void create(int, int, String^, String^, String^, String^, String^, int) override;
	void update(String^, String^, String^, String^, String^, int, String^) override;
	void suppr(){}
};

