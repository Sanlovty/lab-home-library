#include "author.h"

Author::Author(const fullname_t& fullName,
               const DateClass& birthday) :
	DateClass(birthday),
	fullName_(fullName)
{
}

Author::Author(const string& name,
               const string& surname,
               const string& secondName,
               const DateClass& birthday) :
	DateClass(birthday),
	fullName_(name, surname, secondName)

{
}

fullname_t Author::getFullName() const
{
	return fullName_;
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
		"\n	Birthday day: " + to_string(getDay()) +
		"\n	Birthday month: " + to_string(getMonth()) +
		"\n	Birthday year: " + to_string(getYear()) +
		+"\n}";
}
