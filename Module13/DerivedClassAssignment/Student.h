#pragma once
#include "Person.h"

class Student :
    public Person
{
private:
    string type;
public:
    Student();
    Student(string, string, string, string);
    ~Student();
    // MUTATORS
    void setType(string studentType)
    {
        type = studentType;
    }
    // ACCESSORS
    string getType() const
    {
        return type;
    }

    string print();
};