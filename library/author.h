#ifndef AUTHOR_H
#define AUTHOR_H

#include "date_class.h"
#include "header.h"

class Author : public DateClass
{
protected:
	// ��� ������
	fullname_t fullName_;
public:
	// ������������ � ���������� �����������:
	Author(const fullname_t& fullName,
	       const DateClass& birthday);
	Author(const string& name,
	       const string& surname,
	       const string& secondName,
	       const DateClass& birthday);

	// ����� ��������� ���
	fullname_t getFullName() const;


	// ������ ��������� ��� � ������� �����������
	void setFullName(const string& name,
	                 const string& surname,
	                 const string& secondName);
	void setFullName(const fullname_t& fullName);

	// �����, ������������ ������ ��� ������
	string toString() const;
};
#endif
