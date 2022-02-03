//
// Created by ojcch on 2/3/2022.
//

#include <string>

#ifndef CMAKE_BASE_PROJECT_STUDENT_H
#define CMAKE_BASE_PROJECT_STUDENT_H

using namespace std;

class Student {

public:
    string name;
    string birthday;
    //Student();

    Student(string name, string birthday);

    ~Student();
};


#endif //CMAKE_BASE_PROJECT_STUDENT_H
