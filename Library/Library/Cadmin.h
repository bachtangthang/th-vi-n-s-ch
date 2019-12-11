#ifndef __CADMIN_H__
#define __CADMIN_H__
#include "CListUser.h"
class Cadmin : public CListUser, CListBill, CListBook
{
public:
	void khoasach();
};	
#endif
