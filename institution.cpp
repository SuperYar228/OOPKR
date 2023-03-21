#include "institution.h"
#include <string.h>
#include <wchar.h>
#include <string>
#pragma warning(disable : 4996)
inline institution::institution(char* name, char* address, int staffCount) {
    Name = new char[strlen(name) + 1];
    Address = new char[strlen(address) + 1];
    strcpy(Name, name);
    strcpy(Address, address);
    StaffCount = staffCount;
}
//institution::institution()
//{
//	Name = '\0';
//	Address = '\0';
//	StaffCount = 0;
//}
