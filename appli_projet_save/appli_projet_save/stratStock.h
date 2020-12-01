#pragma once
#include "stratCRUD.h"

ref class stratStock: public stratCRUD
{
	void create()override;
	void read() override;
	void update() override;
	void suppr() override;
};

