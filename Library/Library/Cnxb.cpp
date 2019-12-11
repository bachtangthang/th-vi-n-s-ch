#include "Cnxb.h"

void Cnxb::addBook(Cbook &a)
{
	list.push_back(a);
}

void Cnxb::deleteBook()
{
	int x;
	cout << "Nhap so sach ban muon xoa: ";
	cin >> x;
	if (list[x].NXB == tenNXB)
	{
		list.erase(list.begin() + x);
	}
	else{}
}

void Cnxb::fixBook()
{
	int x;
	cout << "Nhap so thu tu sach ban muon sua (phai la cua ban): ";
	cin >> x;
	if (list[x].NXB == tenNXB)
	{
		string ten, ma, tacgia;
		double gia;
		cout << "Nhap ten sach";
		cin >> ten;
		list[x].TenSach = ten;
		cout << "Nhap ma sach";
		cin >> ma;
		list[x].MaSach = ma;
		cout << "Nhap tac gia";
		cin >> tacgia;
		list[x].TacGia = tacgia;
		cout << "Nhap gia sach";
		cin >> gia;
		list[x].GiaSach = gia;
	}
	else {
		cout << "Day khong phai la sach cua ban, khong du tham quyen";
	}
}

void Cnxb::loadNXBBook(ifstream &fin)
{
	if (fin.eof())
	{
		cout << "Khong mo duoc file" << endl;
		return;
	}
	else
	{
		string tensach, masach, nxb, tacgia, giasachtemp, hienthitemp;
		double giasach;
		int view;
		while (!fin.eof())
		{
			getline(fin, tensach, '\t');
			getline(fin, masach, '\t');
			getline(fin, nxb, '\t');
			getline(fin, tacgia, '\t');
			getline(fin, giasachtemp, '\n');
			getline(fin, hienthitemp, '\n');
			giasach = stod(giasachtemp);
			view = stod(hienthitemp);
			Cbook a(tensach, masach, giasach, tacgia, nxb, 1);
			listBookNXB.push_back(a);
		}
		for (auto i = listBookNXB.begin(); i != listBookNXB.end(); i++)
		{
			if ((*i).NXB != tenNXB)
			{
				listBookNXB.erase(i);
			}
			else{}
		}
	}
}

void Cnxb::inDanhsach()
{
	for (auto i = listBookNXB.begin(); i <= listBookNXB.end(); i++)
	{
		(*i).xuatSach();
	}
}

void Cnxb::khoaSach()
{
	int x;
	cout << "Ban muon khoa sach vi tri thu may: ";
	cin >> x;
	if (list[x].NXB == tenNXB)
	{
		list[x].hienthi = 0;
	}
	else
	{
		cout << "Ban khong du tham quyen voi sach nay";
	}
}
