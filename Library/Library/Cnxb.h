#ifndef __CNXB_H__
#define __CNXB_H__
#include "CListUser.h"
class Cnxb : public CListUser, CListBill, CListBook
{
public:
	vector <Cbook> listBookNXB;
	string tenNXB;
	void addBook(Cbook &a);
	void deleteBook();
	void fixBook();
	void loadNXBBook(ifstream &fin);
	void inDanhsach();
	void khoaSach();
};
#endif
