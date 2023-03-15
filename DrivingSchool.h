#pragma once
#include "institution.h"
#include <ostream>
using namespace std;
class DrivingSchool : public institution {
private:
    short studyTerm;
    double studyCost;
public:
    DrivingSchool(char* Name, char* Address, int StaffCount, short StudyTerm, double StudyCost)
        : institution (Name, Address, StaffCount) {
        studyTerm = StudyTerm;
        studyCost = StudyCost;
    }
    short GetStudyTerm() {
        return studyTerm;
    }
    double GetStudyCost() {
        return studyCost;
    }
    friend ostream& operator !(ostream& os, const DrivingSchool& school) {
        os << "Driving School: " << school.name << ", " << school.address << ", "
            << school.staffCount << ", " << school.studyTerm << " weeks, $"
            << school.studyCost;
        return os;
};