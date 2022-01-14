#ifndef DATE_CLASS_H
#define DATE_CLASS_H
#include "header.h"

class DateClass
{
protected:
	date_t date_;

public:
	DateClass(const date_t& date);
	DateClass(const size_t& day,
	          const size_t& month,
	          const size_t& year);
	void setDate(const size_t& day,
	             const size_t& month,
	             const size_t& year);
	void setDate(const date_t& date);

	date_t getDate() const;
	size_t getDay() const;
	size_t getMonth() const;
	size_t getYear() const;
};
#endif
