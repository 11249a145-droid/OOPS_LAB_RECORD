#include <iostream>
#include <string>
using namespace std;

class University
{
private:
    string name;
    string location;
public:
    University(string n, string l)
    {
        name = n;
        location = l;
    }
    //Destructor
    ~University()
    {
        cout << "University " << name << " deconstructor." << endl;
    }
};

class Student
{
private:
    string studentName;
    int studentID;
public:
    Student(string n, int id)
    {
        studentName = n;
        studentID = id;
    }
    ~Student()
    {
        cout << "Student " << studentName << " unenrolled." << endl;
    }
};

int main()
{
    University university("Example University", "New York");
    Student student1("John Doe", 101);
    Student student2("Jane Smith", 102);
    return 0;
}
