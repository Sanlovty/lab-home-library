#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

// TODO : docs
class Library
{
protected:
	// ¬ектор (массив) книг
	vector<Book> books_;

	// ћетод, провер€ющий выходит ли индекс за пределы размеров books_. ≈сли выходит,
	// то кидаетс€ ошибка
	void checkIndex_(const size_t& index) const;
	// ћетоды сравнени€ двух книг (по разным параметрам), которые нужны дл€
	// использовани€ метода sort(books.begin(), books.end()), который сам будет сортировать
	// массивы, засовыва€ в методы по два элемента (с помощью этих методов он и будет их сравнивать)
	static bool compareBooksName_(const Book& first, const Book& second);
	static bool compareBooksPublishingHouse_(const Book& first, const Book& second);
	static bool compareBooksIsbn_(const Book& first, const Book& second);
	static bool compareDate_(const date_t& first, const date_t& second);
	static bool compareBooksDate_(const Book& first, const Book& second);
	static bool compareBooksAuthorBirthday_(const Book& first, const Book& second);
	static bool compareBooksAuthorFullName_(const Book& first, const Book& second);
public:
	//  онструкторы с параметрами / без
	Library(const vector<Book>& books);
	Library();

	// ћетод получени€ количества книг в библиотеки
	size_t size() const;
	// ћетод провер€ющий, есть ли в библиотеке хот€ бы одна книга
	bool isEmpty() const;

	// ћетод возвращающий книгу по индексу
	Book at(const size_t& index) const;
	// ћетод возвращающий книгу в самом начале
	Book front() const;
	// ћетод возвращающий книгу в самом конце
	Book back() const;

	// ћетод добавл€ющий книгу (book) по индексу(index) в библиотеку 
	void insert(const size_t& index, const Book& book);
	// ћетод удал€ющий книгу по индексу(index) из библиотеки 
	void erase(const size_t& index);

	// ћетод добавл€ющий книгу (book) в конец библиотеки 
	void pushBack(const Book& book);
	// ћетод добавл€ющий книгу (book) в начало библиотеки 
	void pushFront(const Book& book);

	// ћетод удал€ющий книгу из начала библиотеки 
	void popBack();
	// ћетод удал€ющий книгу из конца библиотеки 
	void popFront();

	// ћетоды сортировки библиотеки книг по разным параметрам
	void sortByName();
	void sortByPublishingHouse();
	void sortByIsbn();
	void sortByDate();
	void sortByAuthorFullName();
	void sortByAuthorBirthday();
};
#endif
