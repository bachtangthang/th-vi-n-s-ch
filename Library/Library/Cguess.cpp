#include "Cguess.h"

void Cguess::updateFile()
{
	ofstream fin("Bill.txt");
	fin << this->username << "\t" << this->listBill.size() << endl;
	for (auto i = listBill.begin(); i != listBill.end(); i++)
	{
		fin << (*i).a.TenSach << "\t";
		fin << (*i).a.GiaSach << "\t";
		fin << (*i).num << "\t";
		fin << (*i).thanhtien() << endl;
	}
}
