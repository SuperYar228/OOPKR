#include "institution.h"
#include <string.h>
#include <wchar.h>
institution::institution()
{
	name = '\0';
	address = '\0';
	staffCount = 0;
}
institution::institution(char* Name, char* Address, int StaffCount)
{
	strcpy(name, Name);
	strcpy(address, Address);
    staffCount = StaffCount;
	}
institution::charauto * GetName()
{
	return name;
}
institution::charauto* GetAddress();
{
	return address;
}
institution::int GetStaffCount();
{
	return staffCount;
}
