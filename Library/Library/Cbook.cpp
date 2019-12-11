#include "Cbook.h"

void Cbook::xuatSach()
{
	if (hienthi == 1)
	{
		cout << TenSach << endl;
		cout << MaSach << endl;
		cout << GiaSach << endl;
		cout << NXB << endl;
		cout << TacGia << endl;
		cout << "-----------------" << endl;
	}
	else{}
}

Cbook::Cbook()
{
	TenSach = "";
	MaSach = "";
	GiaSach = 0;
	TacGia = "";
	NXB = "";
	hienthi = 1;
}

Cbook::~Cbook()
{
	TenSach = "";
	MaSach = "";
	GiaSach = 0;
	NXB = "";
	TacGia = "";
}

Cbook& Cbook::operator=(const Cbook& x)
{
	TenSach = x.TenSach;
	MaSach = x.MaSach;
	GiaSach = x.GiaSach;
	TacGia = x.TacGia;
	NXB = x.NXB;
	hienthi = x.hienthi;
	return (*this);
}

Cbook::Cbook(string tensach, string masach, double giasach, string tacgia, string nxb, int view)
{
	TenSach = tensach;
	MaSach = masach;
	GiaSach = giasach;
	TacGia = tacgia;
	NXB = nxb;
	hienthi = view;
}
