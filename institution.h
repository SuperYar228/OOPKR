#pragma once
#include <cstring>
class institution
{
private:
    char* Name;
    char* Address;
    int StaffCount;
public:
    institution(char* name, char* address, int staffCount);

   char* GetName() {
        return Name;
    }

   char* GetAddress() {
        return Address;
    }

    int GetStaffCount() {
        return StaffCount;
    }
    institution();
};