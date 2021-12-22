#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

// TODO : docs
class Library
{
protected:
	vector<Book> books_;

	void checkIndex_(const size_t& index) const;
	static bool compareBooksName_(const Book& first, const Book& second);
	static bool compareBooksPublishingHouse_(const Book& first, const Book& second);
	static bool compareBooksIsbn_(const Book& first, const Book& second);
	static bool compareDate_(const date_t& first, const date_t& second);
	static bool compareBooksDate_(const Book& first, const Book& second);
	static bool compareBooksAuthorBirthday_(const Book& first, const Book& second);
	static bool compareBooksAuthorFullName_(const Book& first, const Book& second);
public:
	Library(const vector<Book>& books);
	Library();

	size_t size() const;
	bool isEmpty() const;

	Book at(const size_t& index) const;
	Book front() const;
	Book back() const;

	void insert(const size_t& index, const Book& book);
	void erase(const size_t& index);

	void pushBack(const Book& book);
	void pushFront(const Book& book);

	void popBack();
	void popFront();

	void sortByName();
	void sortByPublishingHouse();
	void sortByIsbn();
	void sortByDate();
	void sortByAuthorFullName();
	void sortByAuthorBirthday();
};
#endif
