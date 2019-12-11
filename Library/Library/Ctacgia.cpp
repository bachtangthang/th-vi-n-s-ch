#include "Ctacgia.h"

void Ctacgia::addBook(Cbook& a)
{
	list.push_back(a);
}

void Ctacgia::deleteBook()
{
	int x;
	cout << "Nhap so sach ban muon xoa: ";
	cin >> x;
	if (list[x].TacGia == tenTacGia)
	{
		list.erase(list.begin() + x);
	}
	else {}
}

void Ctacgia::fixBook()
{
	int x;
	cout << "Nhap so thu tu sach ban muon sua (phai la cua ban): ";
	cin >> x;
	if (list[x].TacGia == tenTacGia)
	{
		string ten, ma, nxb;
		double gia;
		cout << "Nhap ten sach";
		cin >> ten;
		list[x].TenSach = ten;
		cout << "Nhap ma sach";
		cin >> ma;
		list[x].MaSach = ma;
		cout << "Nhap NXB";
		cin >> nxb;
		list[x].TacGia = nxb;
		cout << "Nhap gia sach";
		cin >> gia;
		list[x].GiaSach = gia;
	}
	else {
		cout << "Day khong phai la sach cua ban, khong du tham quyen";
	}
}

void Ctacgia::loadTacGiaBook(ifstream& fin)
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
			listBookTacgia.push_back(a);
		}
		for (auto i = listBookTacgia.begin(); i != listBookTacgia.end(); i++)
		{
			if ((*i).TacGia != tenTacGia)
			{
				listBookTacgia.erase(i);
			}
			else {}
		}
	}
}

void Ctacgia::inDanhsach()
{
	for (auto i = listBookTacgia.begin(); i <= listBookTacgia.end(); i++)
	{
		(*i).xuatSach();
	}
}

void Ctacgia::khoasach()
{
	int x;
	cout << "Ban muon khoa sach vi tri thu may: ";
	cin >> x;
	if (list[x].TacGia == tenTacGia)
	{
		list[x].hienthi = 0;
	}
	else
	{
		cout << "Ban khong du tham quyen voi sach nay";
	}
}
