/*
 * Counter.cpp
 */
#include "Counter.h"
#include<iostream>
#include<string>


int Counter::objCount=0;

Counter::Counter()
{
	count=0;
	objCount++;
	serialNo=objCount;
}
Counter::Counter(int c)
{
	count=c;
	objCount++;
	serialNo=objCount;
}
void Counter::setCount(int c)
{
	count=c;
}
int Counter::getCount() const
{
	return count;
}
int Counter::getSerialNo()const
{
	return serialNo;
}
int Counter::getObjCount()
{
	return objCount;
}
int Counter::IncrementObjCount()
{
	objCount++;
	return objCount;
}
Counter Counter::operator=(const Counter &obj)
{
	if(this==&obj)
	{
		return *this;
	}
	else
	{
		this->count=obj.count;
		return *this;
	}
}
Counter Counter::operator-()
{
	this->count= -1 * (this->count);
	return *this;
}

Counter::~Counter() 
{
}