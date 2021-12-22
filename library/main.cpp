#include "library.h"

int main()
{
	try
	{
		vector<Book> books;
		auto example = Book(
			Author(
				10,
				9,
				2001,
				"A",
				"B",
				"C"
			),
			21,
			7,
			2021,
			1293291393129392,
			"Book of the year",
			"House of house"
		);
		auto example1 = Book(
			Author(
				10,
				9,
				2001,
				"A",
				"B",
				"C"
			),
			21,
			7,
			2021,
			1293291393129392,
			"Book of the year2",
			"House of house2"
		);
		books.push_back(example);
		Library library(books);
		library.erase(1);
	}
	catch (const exception& ex)
	{
		cout << endl << "Exception: " << ex.what();
	}
	return 0;
}
