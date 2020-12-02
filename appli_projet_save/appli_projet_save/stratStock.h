#pragma once
#include "pch.h"

ref class stratStock:public stratCRUD
{
	void create(String^, int^, int^, float^, float^) override;
	//void read() override;
	//void update() override;
	//void suppr() override;
};

