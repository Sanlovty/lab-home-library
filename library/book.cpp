#include "book.h"

Book::Book(const Author& author,
           const size_t& isbn,
           const string& name,
           const string& publishingHouse,
           const DateClass& publishingDate) :
	DateClass(publishingDate),
	author_(author),
	isbn_(isbn),
	name_(name),
	publishingHouse_(publishingHouse)
{
}


Book::Book(const size_t& authorDay,
           const size_t& authorMonth,
           const size_t& authorYear,
           const string& authorName,
           const string& authorSurname,
           const string& authorSecondName,
           const size_t& isbn,
           const string& name,
           const string& publishingHouse,
           const DateClass& publishingDate):
	DateClass(publishingDate),
	author_(
		authorName,
		authorSurname,
		authorSecondName,
		DateClass(authorDay,
		          authorMonth,
		          authorYear)
	),
	isbn_(isbn),
	name_(name),
	publishingHouse_(publishingHouse)
{
}

Author Book::getAuthor() const
{
	return author_;
}

size_t Book::getIsbn() const
{
	return isbn_;
}

string Book::getName() const
{
	return name_;
}

string Book::getPublishingHouse() const
{
	return publishingHouse_;
}

void Book::setAuthor(const Author& author)
{
	author_ = author;
}

void Book::setAuthor(const date_t& birthday, const fullname_t& fullName)
{
	author_ = Author(fullName, birthday);
}

void Book::setAuthor(const size_t& day, const size_t& month, const size_t& year, const string& name,
                     const string& surname, const string& secondName)
{
	author_ = Author(
		name,
		surname,
		secondName,
		DateClass(day,
		          month,
		          year));
}

void Book::setAuthor(const date_t& birthday,
                     const string& name,
                     const string& surname,
                     const string& secondName)
{
	author_ = Author(
		fullname_t(name,
		           surname,
		           secondName),
		birthday
	);
}

void Book::setAuthor(const size_t& day,
                     const size_t& month,
                     const size_t& year,
                     const fullname_t& fullName)
{
	author_ = Author(fullName, DateClass(day, month, year));
}


void Book::setIsbn(const size_t& isbn)
{
	isbn_ = isbn;
}

void Book::setName(const string& name)
{
	name_ = name;
}

void Book::setPublishingHouse(const string& publishingHouse)
{
	publishingHouse_ = publishingHouse;
}

string Book::toString() const
{
	return "Book {\n Name: " + name_ +
		"\n Publishing name: " + publishingHouse_ +
		"\n Isbn: " + to_string(isbn_) +
		"\n " + author_.toString() +
		"\n Publishing date day: " + to_string(getDay()) +
		"\n Publishing date month: " + to_string(getMonth()) +
		"\n Publishing date year: " + to_string(getYear()) +
		+"\n }";
}
