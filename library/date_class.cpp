#include "date_class.h"


DateClass::DateClass(const date_t& date)
	: date_(date)
{
}

DateClass::DateClass(
	const size_t& day,
	const size_t& month,
	const size_t& year) :
	date_(day, month, year)
{
}

void DateClass::setDate(
	const size_t& day,
	const size_t& month,
	const size_t& year)
{
	date_ = date_t(day, month, year);
}

void DateClass::setDate(const date_t& date)
{
	date_ = date;
}

date_t DateClass::getDate() const
{
	return date_;
}

size_t DateClass::getDay() const
{
	return get<0>(date_);
}

size_t DateClass::getMonth() const
{
	return get<1>(date_);
}

size_t DateClass::getYear() const
{
	return get<2>(date_);
}
