#pragma once
ref class stratCRUD
{
public:
	virtual void create() = 0;
	virtual void read() = 0;
	virtual void update() = 0;
	virtual void suppr() = 0;
};

