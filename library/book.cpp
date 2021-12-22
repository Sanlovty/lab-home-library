#include "book.h"

Book::Book(const Author& author,
           const date_t& date,
           const size_t& isbn,
           const string& name,
           const string& publishingHouse) :
	author_(author),
	date_(date),
	isbn_(isbn),
	name_(name),
	publishingHouse_(publishingHouse)
{
}

Book::Book(const Author& author,
           const size_t& day,
           const size_t& month,
           const size_t& year,
           const size_t& isbn,
           const string& name,
           const string& publishingHouse) :
	author_(author),
	date_(day,
	      month,
	      year),
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
           const size_t& day,
           const size_t& month,
           const size_t& year,
           const size_t& isbn,
           const string& name,
           const string& publishingHouse):
	author_(authorDay,
	        authorMonth,
	        authorYear,
	        authorName,
	        authorSurname,
	        authorSecondName),
	date_(day,
	      month,
	      year),
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
           const date_t& date,
           const size_t& isbn,
           const string& name,
           const string& publishingHouse):
	author_(authorDay,
	        authorMonth,
	        authorYear,
	        authorName,
	        authorSurname,
	        authorSecondName),
	date_(date),
	isbn_(isbn),
	name_(name),
	publishingHouse_(publishingHouse)
{
}

Author Book::getAuthor() const
{
	return author_;
}

date_t Book::getDate() const
{
	return date_;
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
	author_ = Author(birthday, fullName);
}

void Book::setAuthor(const size_t& day, const size_t& month, const size_t& year, const string& name,
                     const string& surname, const string& secondName)
{
	author_ = Author(day,
	                 month,
	                 year,
	                 name,
	                 surname,
	                 secondName);
}

void Book::setAuthor(const date_t& birthday,
                     const string& name,
                     const string& surname,
                     const string& secondName)
{
	author_ = Author(
		birthday,
		fullname_t(name,
		           surname,
		           secondName)
	);
}

void Book::setAuthor(const size_t& day,
                     const size_t& month,
                     const size_t& year,
                     const fullname_t& fullName)
{
	author_ = Author(date_t(day, month, year), fullName);
}

void Book::setDate(const date_t& date)
{
	date_ = date;
}

void Book::setDate(const size_t& day, const size_t& month, const size_t& year)
{
	date_ = date_t(day, month, year);
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
		"\n Publishing date day: " + to_string(get<0>(date_)) +
		"\n Publishing date month: " + to_string(get<1>(date_)) +
		"\n Publishing date year: " + to_string(get<2>(date_)) +
		+"\n }";
}
