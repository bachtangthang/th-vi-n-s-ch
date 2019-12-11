#include "Cbill.h"

double Cbill::thanhtien()
{
	return a.GiaSach * num;
}

void Cbill::xuatHoaDon()
{
	cout << this->a.TenSach << " : " << num << endl;
}
