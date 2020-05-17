/*
 * Counter.h
 */

#ifndef COUNTER_H_
#define COUNTER_H_
#include<iostream>
using namespace std;

class Counter {
	int count;
	static int objCount;
	int serialNo;
public:
	Counter();
	Counter(int c);
	void setCount(int c);
	int getCount() const;
	int getSerialNo()const;
	static int getObjCount();
	static int IncrementObjCount();
	Counter operator=(const Counter &p);
	Counter operator-();
	virtual ~Counter();

};

#endif /* COUNTER_H_ */
