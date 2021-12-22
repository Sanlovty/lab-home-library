#ifndef BOOK_H
#define BOOK_H
#include "author.h"

// TODO: docs
class Book
{
protected:
	Author author_;
	date_t date_;
	size_t isbn_;
	string name_;
	string publishingHouse_;
public:
	Book(const Author& author,
	     const date_t& date,
	     const size_t& isbn,
	     const string& name,
	     const string& publishingHouse);
	Book(const Author& author,
	     const size_t& day,
	     const size_t& month,
	     const size_t& year,
	     const size_t& isbn,
	     const string& name,
	     const string& publishingHouse);
	Book(const size_t& authorDay,
	     const size_t& authorMonth,
	     const size_t& authorYear,
	     const string& authorName,
	     const string& authorSurname,
	     const string& authorSecondName,
	     const size_t& day,
	     const size_t& month,
	     const size_t& year,
	     const size_t& isbn,
	     const string& name,
	     const string& publishingHouse);
	Book(const size_t& authorDay,
	     const size_t& authorMonth,
	     const size_t& authorYear,
	     const string& authorName,
	     const string& authorSurname,
	     const string& authorSecondName,
	     const date_t& date,
	     const size_t& isbn,
	     const string& name,
	     const string& publishingHouse);

	Author getAuthor() const;
	date_t getDate() const;
	size_t getIsbn() const;
	string getName() const;
	string getPublishingHouse() const;

	void setAuthor(const Author& author);
	void setAuthor(const date_t& birthday,
	               const fullname_t& fullName);
	void setAuthor(const size_t& day,
	               const size_t& month,
	               const size_t& year,
	               const string& name,
	               const string& surname,
	               const string& secondName);
	void setAuthor(const date_t& birthday,
	               const string& name,
	               const string& surname,
	               const string& secondName);
	void setAuthor(const size_t& day,
	               const size_t& month,
	               const size_t& year,
	               const fullname_t& fullName);
	void setDate(const date_t& date);
	void setDate(const size_t& day,
	             const size_t& month,
	             const size_t& year);
	void setIsbn(const size_t& isbn);
	void setName(const string& name);
	void setPublishingHouse(const string& publishingHouse);
};


#endif
