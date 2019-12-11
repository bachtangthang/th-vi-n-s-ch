#include <iostream>
#include "CListBook.h"
#include "CListUser.h"
#include "Cnxb.h"
void main()
{
	CListBook a;
	a.loadBookFromFile();
	a.inListBook();
}