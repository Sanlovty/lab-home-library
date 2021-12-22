#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

class Library
{
protected:
	vector<Book> books_;
public:
	Library(const vector<Book>& books);
	Library();

	Book at(const size_t& index) const;
	Book front() const;
	Book back() const;

	Book insert(const size_t& index, const Book& book);
	void erase(const size_t& index);

	void pushBack(const Book& book);
	void pushFront(const Book& book);

	void popBack() const;
	void popFront() const;

	void sortByName();
	void sortByPublishingHouse();
	void sortByIsbn();
	void sortByDate();
	void sortByAuthorName();
	void sortByAuthorDate();
};
#endif
