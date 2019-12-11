#include "CListBook.h"

void CListBook::loadBookFromFile()
{
	ifstream fin("Book.txt");
	if (fin.eof())
	{
		cout << "Khong mo duoc file"<<endl;
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
			fin >> giasach;
			fin >> view;
			Cbook a(tensach, masach, giasach, tacgia, nxb, view);
			list.push_back(a);
		}
	}
}
void CListBook::addBook(Cbook &x)
{
	list.push_back(x);
}

void CListBook::deleteBook()
{
	int bookNum = findBook();
	if (bookNum >= 0)
	{
		list.erase(list.begin() + bookNum);
	}
	else{}
}

void CListBook::fixBook()
{
}

int CListBook::findBook()
{
	string tensach;
	cout << "Nhap ten sach: ";
	cin >> tensach;
	for (auto i = 0; i < list.size(); i++)
	{
		if (list[i].TenSach == tensach)
			return i;
	}
	return -1;
}

void CListBook::updateFile()
{
	ofstream fin("Book.txt");
	if (fin.eof())
	{
		cout << "Khong mo duoc file" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < list.size(); i++)
		{
			fin << list[i].TenSach << "\t";
			fin << list[i].MaSach << "\t";
			fin << list[i].GiaSach << "\t";
			fin << list[i].TacGia << "\t";
			fin << list[i].NXB << "\t";
			fin << list[i].hienthi << endl;
		}
	}
	fin.close();
}

void CListBook::inListBook()
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << i << ")";
		list[i].xuatSach();
	}
}



