#pragma once
class institution
{
private:
	char* name;
	char* address;
	int staffCount; //���� �ʳ������ �����������
public:
	institution(char* Name, char* Address, int StaffCount);
	institution();
	charauto* GetName();
	charauto* GetAddress();
	int GetStaffCount();
	
};

