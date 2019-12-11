#include "Cuser.h"

Cuser::Cuser()
{
	username = "ABC";
	password = "123";
}

Cuser::Cuser(string name, string pass, int loai)
{
	username = name;
	password = pass;
	type = loai;
}

Cuser Cuser::operator=(const Cuser& x)
{
	username = x.username;
	password = x.password;
	type = x.type;
	stt = x.stt;
	return (*this);
}

void Cuser::thoat()
{
	this->stt = 0;
}



