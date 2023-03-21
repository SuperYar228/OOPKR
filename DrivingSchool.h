#pragma once
#include "institution.h"
#include <iostream>
#include <cstring>
#include <string>
class DrivingSchool : public institution
{
private:
    short StudyTerm;
    double StudyCost;
public:
    DrivingSchool(char* name, char* address, int staffCount, short studyTerm, double studyCost)
        : institution(name, address, staffCount), StudyTerm(studyTerm), StudyCost(studyCost) {}

    short GetStudyTerm() {
        return StudyTerm;
    }

    double GetStudyCost() {
        return StudyCost;
    }

    std::string operator!() {
        std::string result = "";
        result += "Name: " + std::string(GetName()) + "\n";
        result += "Address: " + std::string(GetAddress()) + "\n";
        result += "Staff Count: " + std::to_string(GetStaffCount()) + "\n";
        result += "Study Term: " + std::to_string(GetStudyTerm()) + "\n";
        result += "Study Cost: " + std::to_string(GetStudyCost()) + "\n";
        return result;
    }
};
