#include "author.h"

Author::Author(const date_t& birthday,
               const fullname_t& fullName) :
	birthday_(birthday),
	fullName_(fullName)
{
}

Author::Author(const size_t& day,
               const size_t& month,
               const size_t& year,
               const string& name,
               const string& surname,
               const string& secondName) :
	birthday_(day, month, year),
	fullName_(name, surname, secondName)

{
}

Author::Author(const date_t& birthday,
               const string& name,
               const string& surname,
               const string& secondName) :

	birthday_(birthday),
	fullName_(name, surname, secondName)
{
}

Author::Author(const size_t& day,
               const size_t& month,
               const size_t& year,
               const fullname_t& fullName) :
	birthday_(day, month, year),
	fullName_(fullName)
{
}

date_t Author::getBirthday() const
{
	return birthday_;
}

fullname_t Author::getFullName() const
{
	return fullName_;
}

void Author::setBirthday(const size_t& day, const size_t& month, const size_t& year)
{
	birthday_ = date_t(day, month, year);
}

void Author::setBirthday(const date_t& birthday)
{
	birthday_ = birthday;
}

void Author::setFullName(const string& name, const string& surname, const string& secondName)
{
	fullName_ = fullname_t(name, surname, secondName);
}

void Author::setFullName(const fullname_t& fullName)
{
	fullName_ = fullName;
}

string Author::toString() const
{
	return
		"Author {\n	Name: " + get<0>(fullName_) +
		"\n	Surname: " + get<1>(fullName_) +
		"\n	SecondName: " + get<2>(fullName_) +
		"\n	Birthday day: " + to_string(get<0>(birthday_)) +
		"\n	Birthday month: " + to_string(get<1>(birthday_)) +
		"\n	Birthday year: " + to_string(get<2>(birthday_)) +
		+"\n}";
}
