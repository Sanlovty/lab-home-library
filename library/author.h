#ifndef AUTHOR_H
#define AUTHOR_H

#include "header.h"

class Author
{
protected:
	date_t birthday_;
	fullname_t fullName_;
public:
	Author(const date_t& birthday,
	       const fullname_t& fullName);
	Author(const size_t& day,
	       const size_t& month,
	       const size_t& year,
	       const string& name,
	       const string& surname,
	       const string& secondName);

	date_t getBirthday() const;
	fullname_t getFullName() const;

	void setBirthday(const size_t& day,
	                 const size_t& month,
	                 const size_t& year);
	void setBirthday(const date_t& birthday);
	void setFullName(const string& name,
	                 const string& surname,
	                 const string& secondName);
	void setFullName(const fullname_t& fullName);
};
#endif
