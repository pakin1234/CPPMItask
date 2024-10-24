#pragma once

class Object
{
private:
	int numb;
	static int NumberCount;
public:
	Object();
	virtual const char* who() = 0;
};



