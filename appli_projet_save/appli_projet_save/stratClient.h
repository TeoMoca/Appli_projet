#pragma once
#include "pch.h"

ref class stratClient:public stratCRUD
{
public:
	void create();
	void read();
	void update();
	void suppr();
};

