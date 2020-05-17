//
// Created by admin on 29/03/2018.
//

#include "Date.h"


Date::Date(int y, int m, int d)
{
    day = d;
    month = m;
    year = y;
}
Date Date::operator= (const Date &obj)
{
    this->day = obj.day;
    this->month = obj.month;
    this ->year = obj.year;
    return *this;
}
Date Date::operator+ (int d)
{
    Date add;
    add = *this;
    if(this->month==1 || this->month==3 || this->month==5 || this->month==7 || this->month==8 || this->month==10 || this->month==12)
    {
        if ((this->day + d) % 31 == 0)
            add.day = 31;
        else
            add.day = (this->day + d) % 31;
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        if ((this->day + d) % 30 == 0)
            add.day = 30;
        else
            add.day = (this->day + d) % 30;
    }
    else if(isLeapYear())
    {
        if ((this->day + d) % 29 == 0)
            add.day = 29;
        else
            add.day = (this->day + d) % 29;
    }
    else if(!(isLeapYear()))
        if ((this->day + d) % 28 == 0)
            add.day = 28;
        else
            add.day = (this->day + d) % 28;
     return add;
}
Date Date::operator- (int d)//incomplete
{
    Date add;
    add = *this;
    if(this->day-d >= 1)
        add.day = this->day - d;
    else if(this->day-d<1)
    {
        if (month-1 == 1 || month-1 == 3 || month-1 == 5 || month-1 == 7 || month-1 == 8 || month-1 == 10 || month-1 == 12)
        {
            if ((this->day + d) % 31 == 0)
                add.day = 31;
            else
                add.day = (this->day + d) % 31;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if ((this->day + d) % 30 == 0)
                add.day = 30;
            else
                add.day = (this->day + d) % 30;
        } else if (isLeapYear()) {
            if ((this->day + d) % 29 == 0)
                add.day = 29;
            else
                add.day = (this->day + d) % 29;
        } else if (!(isLeapYear()))
            if ((this->day + d) % 28 == 0)
                add.day = 28;
            else
                add.day = (this->day + d) % 28;
    }
        return add;
}
Date Date::operator+ (const Date &obj)//incomplete
{
    Date add;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        if ((this->day + obj.day) % 31 == 0)
            add.day = 31;
        else
            add.day = (this->day + obj.day) % 31;
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        if ((this->day + obj.day) % 30 == 0)
            add.day = 30;
        else
            add.day = (this->day + obj.day) % 30;
    }
    else if(isLeapYear())
    {
        if ((this->day + obj.day) % 29 == 0)
            add.day = 29;
        else
            add.day = (this->day + obj.day) % 29;
    }
    else if(!(isLeapYear()))
        if ((this->day + obj.day) % 28 == 0)
            add.day = 28;
        else
            add.day = (this->day + obj.day) % 28;
    return add;
}
Date Date::operator- (const Date &obj)//incomplete
{}
bool Date::operator> (const Date &obj)
{
    if(this->year > obj.year)
        return true;
    else if(this ->year == obj.year && this->month > obj.month)
        return true;
    else if(this ->year == obj.year && this->month == obj.month && this->day > obj.day)
        return true;
    return false;
}
bool Date::operator< (const Date &obj)
{
    if(this->year < obj.year)
        return true;
    else if(this ->year == obj.year && this->month < obj.month)
        return true;
    else if(this ->year == obj.year && this->month == obj.month && this->day < obj.day)
        return true;
    return false;
}
bool Date::operator<= (const Date &obj)
{
    if(this->year <= obj.year && this->month <= obj.month && this->day <= obj.day)
        return true;
    return false;
}
bool Date::operator>= (const Date &obj)
{
    if(this->year >= obj.year && this->month >= obj.month && this->day >= obj.day)
        return true;
    return false;
}
int Date::getDay()
{ return day; }
int Date::getMonth()
{ return month; }
int Date::getYear()
{ return year; }
bool Date::isLeapYear()
{
    if ((year%4==0 && year%100!=0) || (year%400==0))
        return true;
    else
        return false;
}
string Date::toString()//incomplete
{}
bool Date::operator== (const Date &rhs) const
{ return day == rhs.day && month == rhs.month && year == rhs.year; }
bool Date::operator!= (const Date &rhs) const
{ return !(rhs == *this); }