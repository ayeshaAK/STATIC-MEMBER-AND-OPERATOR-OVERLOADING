#ifndef DISTANCE_H_
#define DISTANCE_H_

class Distance
{
	int inches;
	int feet;
public:
	Distance();
	Distance(int f, int i);
	int getFeet() const;
	bool setFeet(int feet);
	int getInches() const;
	bool setInches(int inches);
	Distance operator+(const Distance &obj);
	bool operator>(const Distance &obj);
	bool operator<(const Distance &obj);
	Distance operator-(const Distance &obj);
	Distance operator=(const Distance &obj);
	virtual ~Distance();
};

#endif  /*DISTANCE_H_*/ 
