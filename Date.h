#ifndef I170344_LAB9_DATE_H
#define I170344_LAB9_DATE_H

#include<iostream>
#include<string>
using namespace std;

class Date
{
        int day;
        int month;
        int year;
    public:
        Date(int d=1,int m=1,int y=1);
        Date operator= (const Date &obj);
        Date operator+ (int d);
        Date operator- (int d);
        Date operator+ (const Date &obj);
	bool operator==(const Date &rhs) const;
	bool operator!=(const Date &rhs) const;
	Date operator- (const Date &obj);
        bool operator> (const Date &obj);
        bool operator< (const Date &obj);
        bool operator<= (const Date &obj);
        bool operator>= (const Date &obj);
        int getDay();
        int getMonth();
        int getYear();
        bool isLeapYear();
        string toString();
};

#endif


