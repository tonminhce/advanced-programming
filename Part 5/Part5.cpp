#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
protected:
    string name;
    string dob;
    string schoolName;
    string courseName;

public:
    Student(string _name, string _dob, string _schoolName, string _courseName)
        : name(_name), dob(_dob), schoolName(_schoolName), courseName(_courseName) {}

    virtual ~Student() {}

    string getName() const { return name; }
    string getDOB() const { return dob; }
    string getSchoolName() const { return schoolName; }
    string getCourseName() const { return courseName; }

    virtual void displayInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "School Name: " << schoolName << endl;
        cout << "Course Name: " << courseName << endl;
    }
};

class UniStudent : public Student
{
private:
    static const int numSemesters = 8;
    static const int numCoursesPerSemester = 4;
    static const int numAssignmentsPerCourse = 3;
    static const int numTestsPerCourse = 2;
    static const int numExamsPerCourse = 1;

public:
    UniStudent(string _name, string _dob, string _schoolName, string _courseName)
        : Student(_name, _dob, _schoolName, _courseName) {}

    ~UniStudent() {}

    void displayInfo() const override
    {
        cout << "University Student Information:" << endl;
        Student::displayInfo();
        cout << "Number of Semesters: " << numSemesters << endl;
        cout << "Number of Courses per Semester: " << numCoursesPerSemester << endl;
        cout << "Number of Assignments per Course: " << numAssignmentsPerCourse << endl;
        cout << "Number of Tests per Course: " << numTestsPerCourse << endl;
        cout << "Number of Exams per Course: " << numExamsPerCourse << endl;
    }
};

class CollegeStudent : public Student
{
private:
    static const int numSemesters = 4;
    static const int numCoursesPerSemester = 3;
    static const int numAssignmentsPerCourse = 1;
    static const int numTestsPerCourse = 1;
    static const int numExamsPerCourse = 1;

public:
    CollegeStudent(string _name, string _dob, string _schoolName, string _courseName)
        : Student(_name, _dob, _schoolName, _courseName) {}

    ~CollegeStudent() {}

    void displayInfo() const override
    {
        cout << "College Student Information:" << endl;
        Student::displayInfo();
        cout << "Number of Semesters: " << numSemesters << endl;
        cout << "Number of Courses per Semester: " << numCoursesPerSemester << endl;
        cout << "Number of Assignments per Course: " << numAssignmentsPerCourse << endl;
        cout << "Number of Tests per Course: " << numTestsPerCourse << endl;
        cout << "Number of Exams per Course: " << numExamsPerCourse << endl;
    }
};

int main()
{
    UniStudent uniStudent("Nguyen Ton Minh", "2002-12-24", "Bach Khoa University", "Computer Engineering");
    CollegeStudent collegeStudent("Nguyen Thi Ton Minh", "2002-12-24", "Bach Khoa College", "Computer Engineering");

    cout << "University Student Info:" << endl;
    uniStudent.displayInfo();
    cout << endl;

    cout << "College Student Info:" << endl;
    collegeStudent.displayInfo();

    return 0;
}
