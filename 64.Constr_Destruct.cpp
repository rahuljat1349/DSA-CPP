#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    int age;
    string course;
    int *rollNo;

    Student(int rollNo)
    {
        name = "Rahul";
        age = 21;
        course = "CS";
        this->rollNo = new int;
        *(this->rollNo) = rollNo;
    }
    // copy construtor
    Student(Student &student)
    {
        this->name = student.name;
        this->age = student.age;
        this->course = student.course;
        this->rollNo = new int;
        *(this->rollNo) = *(student.rollNo); // to make a deep copy
    }
    // destrutor to free dynamically allocated mamory
    ~Student(){
        delete rollNo;
    }
};

int main()
{   
    Student s1(21);

    Student s2(s1);

    cout << s2.name << endl;    
    *(s2.rollNo) = 22;
    cout << *(s1.rollNo) << endl;
    cout << *(s2.rollNo) << endl;

    return 0;
}