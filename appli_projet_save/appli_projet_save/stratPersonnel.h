#pragma once
#include "stratCRUD.h"

ref class stratPersonnel :public stratCRUD
{
public:
	void create(array<String^>^, String^, String^, String^) override;
	void read(String^, String^, String^) override;
	//void update() override;
	//void suppr() override;
private:

};

