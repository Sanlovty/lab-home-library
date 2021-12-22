#include "library.h"

void Library::checkIndex_(const size_t& index) const
{
	if (index >= size())
	{
		throw exception("Index of the book is out of range");
	}
}

Library::Library(const vector<Book>& books) :
	books_(books)
{
}

Library::Library() = default;

size_t Library::size() const
{
	return books_.size();
}

bool Library::isEmpty() const
{
	return books_.empty();
}

Book Library::at(const size_t& index) const
{
	checkIndex_(index);
	return books_.at(index);
}

Book Library::front() const
{
	return books_.front();
}

Book Library::back() const
{
	return books_.back();
}

void Library::insert(const size_t& index, const Book& book)
{
	checkIndex_(index);
	books_.insert(books_.begin() + static_cast<int>(index), book);
}

void Library::erase(const size_t& index)
{
	checkIndex_(index);
	books_.erase(books_.begin() + static_cast<int>(index));
}

void Library::pushBack(const Book& book)
{
	books_.push_back(book);
}

void Library::pushFront(const Book& book)
{
	insert(0, book);
}

void Library::popBack()
{
	books_.pop_back();
}

void Library::popFront()
{
	erase(0);
}

void Library::sortByName()
{
}

void Library::sortByPublishingHouse()
{
}

void Library::sortByIsbn()
{
}

void Library::sortByDate()
{
}

void Library::sortByAuthorName()
{
}

void Library::sortByAuthorDate()
{
}
