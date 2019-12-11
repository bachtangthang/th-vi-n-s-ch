#ifndef __CLISTUSER_H__
#define __CLISTUSER_H__
#include "Cuser.h"
class CListUser : Cuser
{
public:
	vector <Cuser> ListAccount;
	void loadAccountFromFile();
	bool dangNhap();
	void dangKy();
	void updateAccountFile();
};
#endif
