#ifndef BOOK_H
#define BOOK_H
#include "author.h"

// TODO: docs
class Book
{
protected:
	// Автор книги
	Author author_;
	// Дата написания книги
	date_t date_;
	// Код-ISBN книги
	size_t isbn_;
	// Название книги
	string name_;
	// Название издательства книги
	string publishingHouse_;
public:
	// Конструкторы с различными параметрами:
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

	// Метод получения автора
	Author getAuthor() const;
	// Метод получения даты написания
	date_t getDate() const;
	// Метод получения кода-isbn
	size_t getIsbn() const;
	// Метод получения названия книги
	string getName() const;
	// Метод получения названия издательства
	string getPublishingHouse() const;

	// Методы установки Автора с разными параметрами
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

	// Методы установки даты написания с разными параметрами
	void setDate(const date_t& date);
	void setDate(const size_t& day,
	             const size_t& month,
	             const size_t& year);

	// Метод установки кода-isbn с разными параметрами
	void setIsbn(const size_t& isbn);

	// Метод установки названия книги с разными параметрами
	void setName(const string& name);

	// Метод установки названия издательства с разными параметрами
	void setPublishingHouse(const string& publishingHouse);
};


#endif
