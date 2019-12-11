#ifndef _CTACGIA_H__
#define _CTACGIA_H__
#include "CListUser.h"
class Ctacgia : public CListUser, CListBill, CListBook
{
public:
	vector <Cbook> listBookTacgia;
	string tenTacGia;
	void addBook(Cbook& a);
	void deleteBook();
	void fixBook();
	void loadTacGiaBook(ifstream& fin);
	void inDanhsach();
	void khoasach();
};
#endif
