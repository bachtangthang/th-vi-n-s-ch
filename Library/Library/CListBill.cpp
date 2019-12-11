#include "CListBill.h"

void CListBill::addBill(Cbill& a)
{
	listBill.push_back(a);
}

void CListBill::deleteBill()
{
	int x;
	cout << "Ban muon xoa hoa don thu may: ";
	cin >> x;
	listBill.erase(listBill.begin() + x);
}

void CListBill::fixBill()
{
	int x, soluong;
	string ten;
	cout << "Ban muon sua hoa don thu may: ";
	cin >> x;
	cout << "Nhap ten sach: ";
	cin >> ten;
	listBill[x].a.TenSach = ten;
	cout << "Nhap so luong muon mua:";
	cin >> soluong;
	listBill[x].num = soluong;
}

void CListBill::xuatBill()
{
	for (auto i = listBill.begin(); i != listBill.end(); i++)
	{
		(*i).xuatHoaDon();
	}
}
