#ifndef __CUSER_H__
#define _CUSER_H__
#include "CListBill.h"
class Cuser 
{
public:
	string username;
	string password;
	int type;//1 la khach hang, 2 la NXB, 3 la tac gia, 4 la Admin
	bool stt = 0;// 1 la login, 0 la out
	Cuser();
	Cuser(string name, string pass, int loai);
	Cuser operator=(const Cuser& x);
	void thoat();
};
#endif
