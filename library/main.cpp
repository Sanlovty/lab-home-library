#include "library.h"
#include <conio.h>

Book getBookFromInput()
{
	string authorName, authorSurname, authorSecondName, bookName,
	       bookPublishingHouse;
	size_t authorDay, authorMonth, authorYear, bookDay, bookMonth, bookYear,
	       bookIsbn;
	cout << "Fill the book parameters:" << endl;
	cout << "	Book author's surname = ";
	getline(cin, authorName);
	cout << "	Book author's secondName = ";
	getline(cin, authorSurname);
	cout << "	Book author's authorSecondName = ";
	getline(cin, authorSecondName);
	cout << "	Book author's birthday day = ";
	cin >> authorDay;
	cout << "	Book author's birthday month = ";
	cin >> authorMonth;
	cout << "	Book author's birthday year = ";
	cin >> authorYear;
	cin.ignore();
	cout << "	Book's name = ";
	getline(cin, bookName);
	cout << "	Book's publishing name = ";
	getline(cin, bookPublishingHouse);
	cout << "	Book publishing date day = ";
	cin >> bookDay;
	cout << "	Book publishing date month = ";
	cin >> bookMonth;
	cout << "	Book publishing date year = ";
	cin >> bookYear;
	cout << "	Book isbn = ";
	cin >> bookIsbn;
	cin.ignore();

	return Book(
		Author(
			authorDay,
			authorMonth,
			authorYear,
			authorName,
			authorSurname,
			authorSecondName
		),
		bookDay,
		bookMonth,
		bookYear,
		bookIsbn,
		bookName,
		bookPublishingHouse
	);
}

int main()
{
	try
	{
		Library library;
		bool isOpen = true;
		while (isOpen)
		{
			if (!_kbhit())
			{
				system("cls");
				cout << "Menu:\n 1) Print books \n 2) Add book \n 3) Delete book \n 4) Sort books \n 5) Exit";

				char symbol = static_cast<char>(_getch());
				switch (symbol)
				{
				case '1':
					{
						system("cls");
						cout << "Library: " << endl;
						for (size_t i = 0; i < library.size(); i++)
						{
							cout << library.at(i).toString() << endl;
						}
						cout << endl << "8) Back";
						while (symbol != '8')
						{
							if (!_kbhit())
							{
								symbol = static_cast<char>(_getch());
							}
						}
					}
					break;
				case '2':
					{
						bool isSecondOpen = true;
						while (isSecondOpen)
						{
							if (!_kbhit())
							{
								system("cls");
								cout <<
									"Add book menu:\n 1) Add to the back \n 2) Add to the front \n 3) Add by index \n 4) Exit";
								symbol = static_cast<char>(_getch());
								switch (symbol)
								{
								case '1':
									{
										system("cls");

										library.pushBack(getBookFromInput());
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '2':
									{
										system("cls");
										library.pushFront(getBookFromInput());
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '3':
									{
										system("cls");
										size_t index;
										cout << "Enter index = ";
										cin >> index;
										library.insert(index, getBookFromInput());
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '4':
									isSecondOpen = false;
									break;
								}
							}
						}
					}
					break;
				case '3':
					{
						bool isThirdOpen = true;
						while (isThirdOpen)
						{
							if (!_kbhit())
							{
								system("cls");
								cout <<
									"Delete book menu:\n 1) Delete from back \n 2) Delete from front \n 3) Delete by index \n 4) Exit";
								symbol = static_cast<char>(_getch());
								switch (symbol)
								{
								case '1':
									{
										system("cls");

										library.popBack();
										cout << "Deleted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '2':
									{
										system("cls");
										library.popFront();
										cout << "Deleted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '3':
									{
										system("cls");
										size_t index;
										cout << "Enter index = ";
										cin >> index;
										cin.ignore();
										library.erase(index);
										cout << "Deleted" << endl;
										library.insert(index, getBookFromInput());
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '4':
									isThirdOpen = false;
									break;
								}
							}
						}
					}
					break;
				case '4':
					{
						bool isFourthOpen = true;
						while (isFourthOpen)
						{
							if (!_kbhit())
							{
								system("cls");
								cout <<
									"Sort books menu:\n 1) Sort by name" <<
									"\n 2) Sort by publishing house " <<
									"\n 3) Sort by isbn" <<
									"\n 4) Sort by date" <<
									"\n 5) Sort by author full name" <<
									"\n 6) Sort by author birthday date" <<
									"\n 7) Exit";
								symbol = static_cast<char>(_getch());
								switch (symbol)
								{
								case '1':
									{
										system("cls");

										library.sortByName();
										cout << "Sorted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '2':
									{
										system("cls");
										library.sortByPublishingHouse();
										cout << "Sorted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '3':
									{
										system("cls");
										library.sortByIsbn();
										cout << "Sorted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '4':
									{
										system("cls");
										library.sortByDate();
										cout << "Sorted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '5':
									{
										system("cls");
										library.sortByAuthorFullName();
										cout << "Sorted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '6':
									{
										system("cls");
										library.sortByAuthorBirthday();
										cout << "Sorted" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '7':
									isFourthOpen = false;
									break;
								}
							}
						}
					}
					break;
				case '5':
					{
						isOpen = false;
						break;
					}
					break;
				}
			}
		}
	}
	catch (const exception& ex)
	{
		cout << endl << "Exception: " << ex.what();
	}
	return 0;
}
