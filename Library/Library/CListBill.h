#ifndef __CLISTBILL_H__
#define __CLISTBILL_H__
#include "Cbill.h"
class CListBill
{
public:
	vector <Cbill> listBill;
	void addBill(Cbill& a);
	void deleteBill();
	void fixBill();
	void xuatBill();
};
#endif
