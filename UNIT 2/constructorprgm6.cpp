#include <iostream>
#include <string>
using namespace std;

class University
{
private:
    string name;
    string location;
public:
    // Constructor
    University(string n, string l)
    {
        name = n;
        location = l;
        cout << "University " << name << " created." << endl;
    }
};

class Student
{
private:
    string studentname;
    int studentID;
public:
    // Constructor
    Student(string n, int id)
    {
        studentname= n;
        studentID = id;
        cout << "Student " << studentname <<" enrolled." << endl;
    }
};

int main()
{
    University university("Example University", "New York");
    Student student1("John Doe", 101);
    Student student2("Jane Smith", 102);
    return 0;
}
