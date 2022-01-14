#include "library.h"

void Library::checkIndex_(const size_t& index) const
{
	if (index >= size())
	{
		throw exception("Index of the book is out of range");
	}
}

bool Library::compareBooksName_(const Book& first, const Book& second)
{
	return first.getName().compare(second.getName()) < 0;
}

bool Library::compareBooksPublishingHouse_(const Book& first, const Book& second)
{
	return first.getPublishingHouse().compare(second.getPublishingHouse()) < 0;
}

bool Library::compareBooksIsbn_(const Book& first, const Book& second)
{
	return first.getIsbn() < second.getIsbn();
}

bool Library::compareDate_(const date_t& first, const date_t& second)
{
	const size_t firstDateDay = get<0>(first);
	const size_t firstDateMonth = get<1>(first);
	const size_t firstDateYear = get<2>(first);
	const size_t secondDateDay = get<0>(second);
	const size_t secondDateMonth = get<1>(second);
	const size_t secondDateYear = get<2>(second);

	if (firstDateYear < secondDateYear)
	{
		return true;
	}
	if (firstDateYear > secondDateYear)
	{
		return false;
	}

	if (firstDateMonth < secondDateMonth)
	{
		return true;
	}
	if (firstDateMonth > secondDateMonth)
	{
		return false;
	}

	if (firstDateDay < secondDateDay)
	{
		return true;
	}
	return false;
}

bool Library::compareBooksDate_(const Book& first, const Book& second)
{
	return compareDate_(first.getDate(), second.getDate());
}

bool Library::compareBooksAuthorBirthday_(const Book& first, const Book& second)
{
	return compareDate_(first.getAuthor().getDate(), second.getAuthor().getDate());
}

bool Library::compareBooksAuthorFullName_(const Book& first, const Book& second)
{
	const fullname_t firstDate = first.getAuthor().getFullName();
	const fullname_t secondDate = second.getAuthor().getFullName();
	const string firstName = get<0>(firstDate);
	const string firstSurname = get<1>(firstDate);
	const string firstSecondName = get<2>(firstDate);
	const string secondName = get<0>(secondDate);
	const string secondSurname = get<1>(secondDate);
	const string secondSecondName = get<2>(secondDate);
	if (firstName.compare(secondName) < 0)
	{
		return true;
	}
	if (firstName.compare(secondName) > 0)
	{
		return false;
	}
	if (firstSurname.compare(secondSurname) < 0)
	{
		return true;
	}
	if (firstSurname.compare(secondSurname) > 0)
	{
		return false;
	}
	if (firstSecondName.compare(secondSecondName) < 0)
	{
		return true;
	}
	return false;
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
	if (isEmpty())
	{
		pushBack(book);
		return;
	}
	insert(0, book);
}

void Library::popBack()
{
	if (isEmpty())
	{
		checkIndex_(0);
	}
	books_.pop_back();
}

void Library::popFront()
{
	erase(0);
}

void Library::sortByName()
{
	sort(books_.begin(), books_.end(), compareBooksName_);
}

void Library::sortByPublishingHouse()
{
	sort(books_.begin(), books_.end(), compareBooksPublishingHouse_);
}

void Library::sortByIsbn()
{
	sort(books_.begin(), books_.end(), compareBooksIsbn_);
}

void Library::sortByDate()
{
	sort(books_.begin(), books_.end(), compareBooksDate_);
}

void Library::sortByAuthorFullName()
{
	sort(books_.begin(), books_.end(), compareBooksAuthorFullName_);
}

void Library::sortByAuthorBirthday()
{
	sort(books_.begin(), books_.end(), compareBooksAuthorBirthday_);
}
