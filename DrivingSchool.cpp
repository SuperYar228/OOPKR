#include "DrivingSchool.h"
#include "institution.h"
#include <iostream>
#include <string>
int main() 
{
    DrivingSchool ds((char)"AutoSchool", (char)"123 Main St", (int)10, (short)6, (double)1000.0);
    std::cout << !ds;
    return 0;
}