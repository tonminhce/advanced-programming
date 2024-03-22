#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

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

    virtual void DoAssignment() = 0;
    virtual void TakeTest() = 0;
    virtual void TakeExam() = 0;

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
    vector<vector<int>> assignmentScores;
    vector<vector<int>> testScores;
    vector<vector<int>> examScores;

public:
    UniStudent(string _name, string _dob, string _schoolName, string _courseName)
        : Student(_name, _dob, _schoolName, _courseName) {}

    ~UniStudent() {}
    void DoAssignment() override
    {
        cout << "Performing assignments for University student " << name << endl;
        assignmentScores.resize(numSemesters, vector<int>(numCoursesPerSemester * numAssignmentsPerCourse));
        for (int sem = 0; sem < numSemesters; ++sem)
        {
            cout << "Semester " << sem + 1 << ":" << endl;
            for (int i = 0; i < numCoursesPerSemester * numAssignmentsPerCourse; ++i)
            {
                assignmentScores[sem][i] = rand() % 101; // Random score between 0 and 100
                cout << "Assignment " << i + 1 << " score: " << assignmentScores[sem][i] << endl;
            }
            cout << endl;
        }
    }

    void TakeTest() override
    {
        cout << "Taking tests for University student " << name << endl;
        testScores.resize(numSemesters, vector<int>(numCoursesPerSemester * numTestsPerCourse));
        for (int sem = 0; sem < numSemesters; ++sem)
        {
            cout << "Semester " << sem + 1 << ":" << endl;
            for (int i = 0; i < numCoursesPerSemester * numTestsPerCourse; ++i)
            {
                testScores[sem][i] = rand() % 101; // Random score between 0 and 100
                cout << "Test " << i + 1 << " score: " << testScores[sem][i] << endl;
            }
            cout << endl;
        }
    }

    void TakeExam() override
    {
        cout << "Taking exams for University student " << name << endl;
        examScores.resize(numSemesters, vector<int>(numCoursesPerSemester * numExamsPerCourse));
        for (int sem = 0; sem < numSemesters; ++sem)
        {
            cout << "Semester " << sem + 1 << ":" << endl;
            for (int i = 0; i < numCoursesPerSemester * numExamsPerCourse; ++i)
            {
                examScores[sem][i] = rand() % 101; // Random score between 0 and 100
                cout << "Exam " << i + 1 << " score: " << examScores[sem][i] << endl;
            }
            cout << endl;
        }
    }
};

// Derived class representing a college student
class CollegeStudent : public Student
{
private:
    static const int numSemesters = 4;
    static const int numCoursesPerSemester = 3;
    static const int numAssignmentsPerCourse = 1;
    static const int numTestsPerCourse = 1;
    static const int numExamsPerCourse = 1;
    vector<vector<int>> assignmentScores;
    vector<vector<int>> testScores;
    vector<vector<int>> examScores;

public:
    CollegeStudent(string _name, string _dob, string _schoolName, string _courseName)
        : Student(_name, _dob, _schoolName, _courseName) {}

    ~CollegeStudent() {}

    void DoAssignment() override
    {
        cout << "Performing assignments for College student " << name << endl;
        assignmentScores.resize(numSemesters, vector<int>(numCoursesPerSemester * numAssignmentsPerCourse));
        for (int sem = 0; sem < numSemesters; ++sem)
        {
            cout << "Semester " << sem + 1 << ":" << endl;
            for (int i = 0; i < numCoursesPerSemester * numAssignmentsPerCourse; ++i)
            {
                assignmentScores[sem][i] = rand() % 101; // Random score between 0 and 100
                cout << "Assignment " << i + 1 << " score: " << assignmentScores[sem][i] << endl;
            }
            cout << endl;
        }
    }

    void TakeTest() override
    {
        cout << "Taking tests for College student " << name << endl;
        testScores.resize(numSemesters, vector<int>(numCoursesPerSemester * numTestsPerCourse));
        for (int sem = 0; sem < numSemesters; ++sem)
        {
            cout << "Semester " << sem + 1 << ":" << endl;
            for (int i = 0; i < numCoursesPerSemester * numTestsPerCourse; ++i)
            {
                testScores[sem][i] = rand() % 101; // Random score between 0 and 100
                cout << "Test " << i + 1 << "score : " << testScores[sem][i] << endl;
            }
            cout << endl;
        }
    }

    void TakeExam() override
    {
        cout << "Taking exams for College student " << name << endl;
        examScores.resize(numSemesters, vector<int>(numCoursesPerSemester * numExamsPerCourse));
        for (int sem = 0; sem < numSemesters; ++sem)
        {
            cout << "Semester " << sem + 1 << ":" << endl;
            for (int i = 0; i < numCoursesPerSemester * numExamsPerCourse; ++i)
            {
                examScores[sem][i] = rand() % 101; // Random score between 0 and 100
                cout << "Exam " << i + 1 << " score: " << examScores[sem][i] << endl;
            }
            cout << endl;
        }
    }
};

int main()
{
    srand(time(nullptr));
    UniStudent uniStudent("Nguyen Ton Minh", "2002-12-24", "Bach Khoa University", "Computer Engineering");
    CollegeStudent collegeStudent("Nguyen Thi Ton Minh", "2002-12-24", "Bach Khoa College", "Computer Engineering");

    uniStudent.DoAssignment();
    uniStudent.TakeTest();
    uniStudent.TakeExam();

    collegeStudent.DoAssignment();
    collegeStudent.TakeTest();
    collegeStudent.TakeExam();

    return 0;
}