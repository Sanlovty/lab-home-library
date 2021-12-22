#ifndef AUTHOR_H
#define AUTHOR_H

#include "header.h"

class Author
{
protected:
	// Дата рождения автора
	date_t birthday_;
	// ФИО автора
	fullname_t fullName_;
public:
	// Конструкторы с различными параметрами:
	Author(const date_t& birthday,
	       const fullname_t& fullName);
	Author(const size_t& day,
	       const size_t& month,
	       const size_t& year,
	       const string& name,
	       const string& surname,
	       const string& secondName);
	Author(const date_t& birthday,
	       const string& name,
	       const string& surname,
	       const string& secondName);
	Author(const size_t& day,
	       const size_t& month,
	       const size_t& year,
	       const fullname_t& fullName);

	// Метод получения дня рождения
	date_t getBirthday() const;
	// Метод получения ФИО
	fullname_t getFullName() const;

	// Методы установки дня рождения с разными параметрами
	void setBirthday(const size_t& day,
	                 const size_t& month,
	                 const size_t& year);
	void setBirthday(const date_t& birthday);

	// Методы установки ФИО с разными параметрами
	void setFullName(const string& name,
	                 const string& surname,
	                 const string& secondName);
	void setFullName(const fullname_t& fullName);

	// Метод, возвращающий автора как строку
	string toString() const;
};
#endif
