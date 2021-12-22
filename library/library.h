#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

class Library
{
protected:
	vector<Book> books_;

	void checkIndex_(const size_t& index) const;
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
	void sortByAuthorName();
	void sortByAuthorDate();
};
#endif
