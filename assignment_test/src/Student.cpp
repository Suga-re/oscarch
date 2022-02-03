//
// Created by ojcch on 2/3/2022.
//

#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, string birthday) {
    this->name = name;
    this->birthday =birthday;
}

Student::~Student() {
    //cout<< "This code is executed during the de-allocation of: "<< this->name <<endl;
    //do anything we want
}


