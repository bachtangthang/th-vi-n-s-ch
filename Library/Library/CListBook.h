#ifndef __CLISTBOOK_H__
#define __CLISTBOOK_H__
#include "Cbook.h"
#include "fstream"
#include <vector>
class CListBook
{
protected:
	vector <Cbook> list;
public:
	void loadBookFromFile();
	virtual void addBook(Cbook &x);
	virtual void deleteBook();
	virtual void fixBook();
	int findBook();
	void updateFile();
	void inListBook();
};
#endif