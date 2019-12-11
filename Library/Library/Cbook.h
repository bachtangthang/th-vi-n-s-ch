#ifndef __CBOOK_H__
#define __CBOOK_H__
#include <iostream>
#include <string>
using namespace std;
class Cbook
{
public:
	string TenSach;
	string MaSach;
	double GiaSach;
	string TacGia;
	string NXB;
	int hienthi = 1;//1 la co, 2 la khong
	void xuatSach();
	Cbook();
	~Cbook();
	Cbook& operator=(const Cbook& x);
	Cbook(string tensach, string masach, double giasach, string tacgia, string nxb, int view);
};
#endif
