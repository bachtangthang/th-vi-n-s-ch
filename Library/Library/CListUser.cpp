#include "CListUser.h"
void CListUser::loadAccountFromFile()
{
	ifstream fin("Account.txt");
	if (fin.eof())
	{
		return;
	}
	else
	{
		string name, pass, typetemp;
		int kieu;
		while (!fin.eof())
		{
			getline(fin, name, '\t');
			getline(fin, pass, '\t');
			fin >> kieu;
			Cuser a(name, pass, kieu);
			ListAccount.push_back(a);
		}
	}
}

bool CListUser::dangNhap()
{
	string ten, mk;
	cout << "Ten dang nhap : ";
	cin >> ten;
	cout << "Mat khau: ";
	cin >> mk;
	for (int i = 0; i <= ListAccount.size(); i++)
	{
		if (ListAccount[i].username == ten && ListAccount[i].password == mk)
		{
			ListAccount[i].stt = 1;
			return 1;
		}
		else{}
	}
	return 0;
}

void CListUser::dangKy()
{
	string ten, mk;
	int loai;
	cout << "Ten dang nhap: ";
	cin >> ten;
	cout << "Mat Khau: ";
	cin >> mk;
	cout << "Ban muon tao tai khoan gi: " << endl;
	cout << "1.Khach Hang" << endl;
	cout << "2. Nha xuat ban" << endl;
	cout << "3.Tac gia" << endl;
	cin >> loai;
	Cuser a(ten, mk, loai);
	ListAccount.push_back(a);
}

void CListUser::updateAccountFile()
{
	ofstream fin("Account.txt");
	if (fin.eof())
	{
		cout << "Khong mo duoc file" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < ListAccount.size(); i++)
		{
			fin << ListAccount[i].username << "\t";
			fin << ListAccount[i].password << "\t";
			fin << ListAccount[i].type << "\t";
			fin << ListAccount[i].stt << " " << endl;
		}
	}
	fin.close();
}
