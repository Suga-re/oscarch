//including other code
#include <iostream>
#include <vector>
#include "Student.h"

//including a namespace
vector<Student> findStudentsWithSameBirthday(vector<Student> students);

void myfunction(int *pInt);

using namespace std;

//the entry point of the program
int main() {

    vector<Student> students;//empty vector

    Student student1("Jack", "01/01/2022");
    Student student2("Katty", "02/01/2022");
    Student student3("Laura", "03/01/2022");
    Student student4("Oscar", "01/01/2022");

    students.push_back(student1);
    students.push_back(student2);
    students.push_back(student3);
    students.push_back(student4);

    vector<Student> pair = findStudentsWithSameBirthday(students);

    if (pair.empty()) {
        cout << "No match" << endl;
    } else {
        cout << "There was a match:" << endl;
        cout << pair[0].name << " " << pair[0].birthday << endl;
        cout << pair[1].name << " " << pair[1].birthday << endl;
    }

    //pointers

    int* number = new int(4); //variable that stores memory addresses

    cout<< number <<endl;
    cout<< *number <<endl;

    myfunction(number);

    delete number;

    cout<< number <<endl;
    cout<< *number <<endl;

    //realloc()//expand the memory ...

    return 0;
}

void myfunction(int *pInt) {
    //added code
}

vector<Student> findStudentsWithSameBirthday(vector<Student> students) {
    vector<Student> record;
    vector<Student> pair;

    for(Student currentStudent : students){
        //check if students is in record
        for(int i = 0; i < record.size(); i++){
            Student studentRecord = record[i];
            if(currentStudent.birthday == studentRecord.birthday){
                pair.push_back(currentStudent);
                pair.push_back(studentRecord);
                return pair;
            }
        }

        record.push_back(currentStudent);
    }

    return pair;
}
