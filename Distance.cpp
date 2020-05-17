#include "Distance.h"
    
Distance::Distance()
{
    inches = 0;
    feet = 0;
}
  
Distance::Distance(int f, int i)
{
    feet = f;

    if( i >= 12)
    {
        feet = feet + (i/12);
        inches = i % 12;
    }
    else
    {
        inches = i;
    }
}
bool Distance::setFeet(int f)
{
    if( f >= 0)
    {
        feet = f;
        return true;
    }
    else
    {
        return false;
    }
    
}
int Distance::getFeet()const
{
    return feet;
}
bool Distance::setInches(int i)
{
    if( i >= 0 )
    {
        if( i >= 12 )
        {
            feet = feet + (i/12);
            inches = i % 12;
        }
        else
        {
            inches = i;
        }
        return true;
    }
    else
    {
        return false;
    }

}
int Distance::getInches()const
{
    return inches;
}
//Operator "="
Distance Distance::operator = (const Distance &obj)
{
        this->feet=obj.feet;
	    this->inches=obj.inches;
	    return *this; 
}
//Operator "+"
Distance Distance::operator + ( const Distance &obj )
{
    this->feet = this->feet + obj.feet;
    this->inches = this->inches + obj.inches;
    this->setFeet(this->feet);
    this->setInches(this->inches);
    return *this;
}

//Operator "-"
Distance Distance::operator - ( const Distance &obj )
{
    this->feet = this->feet - obj.feet;
    this->inches = this->inches - obj.inches;
    this->setFeet(this->feet);
    this->setInches(this->inches);
    return *this;
} 

//Operator "<"
bool Distance::operator<(const Distance &obj){
	if(this->feet<obj.feet)
	{
		return true;
	}
	else if(this->feet==obj.feet){
		if(this->inches<obj.inches)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
//Operator ">"
bool Distance::operator>(const Distance &obj){
	if(this->feet>obj.feet)
	{
		return true;
	}
	else if(this->feet==obj.feet){
		if(this->inches>obj.inches)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}