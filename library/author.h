#ifndef AUTHOR_H
#define AUTHOR_H

#include "date_class.h"
#include "header.h"

class Author : public DateClass
{
protected:
	// ФИО автора
	fullname_t fullName_;
public:
	// Конструкторы с различными параметрами:
	Author(const fullname_t& fullName,
	       const DateClass& birthday);
	Author(const string& name,
	       const string& surname,
	       const string& secondName,
	       const DateClass& birthday);

	// Метод получения ФИО
	fullname_t getFullName() const;


	// Методы установки ФИО с разными параметрами
	void setFullName(const string& name,
	                 const string& surname,
	                 const string& secondName);
	void setFullName(const fullname_t& fullName);

	// Метод, возвращающий автора как строку
	string toString() const;
};
#endif
