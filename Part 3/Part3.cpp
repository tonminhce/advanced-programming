#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int score;

public:
    Student(string _name, int _score) : name(_name), score(_score) {}

    ~Student() {}

    string getName() const { return name; }
    int getScore() const { return score; }
};

class University
{
private:
    string universityName;
    Student **students;
    int numStudents;

public:
    University(string name) : universityName(name), students(nullptr), numStudents(0) {}
    ~University()
    {
        for (int i = 0; i < numStudents; ++i)
        {
            delete students[i];
        }
        delete[] students;
    }

    void addStudent()
    {
        string name;
        int score;

        cout << "Enter the name of the student: ";
        cin.ignore();       // Ignore any leftover newline characters
        getline(cin, name); // Read the full line

        cout << "Enter the score of the student: ";
        cin >> score;

        Student *newStudent = new Student(name, score);
        Student **tempStudents = new Student *[numStudents + 1];

        for (int i = 0; i < numStudents; ++i)
        {
            tempStudents[i] = students[i];
        }
        tempStudents[numStudents] = newStudent;
        delete[] students;
        students = tempStudents;
        numStudents++;

        cout << "Student added successfully." << endl;
    }

    void displayStudentsAndScores()
    {
        if (numStudents == 0)
        {
            cout << "No students to display." << endl;
        }
        else
        {
            cout << "List of all students and their scores:" << endl;
            for (int i = 0; i < numStudents; ++i)
            {
                cout << i + 1 << ". " << students[i]->getName() << ": " << students[i]->getScore() << endl;
            }
        }
    }

    void displayBestStudents()
    {
        if (numStudents == 0)
        {
            cout << "No students to display." << endl;
            return;
        }

        int maxScore = students[0]->getScore();
        for (int i = 1; i < numStudents; ++i)
        {
            if (students[i]->getScore() > maxScore)
            {
                maxScore = students[i]->getScore();
            }
        }

        cout << "Best student(s) and their score(s):" << endl;
        for (int i = 0; i < numStudents; ++i)
        {
            if (students[i]->getScore() == maxScore)
            {
                cout << students[i]->getName() << ": " << maxScore << endl;
            }
        }
    }

    void removeStudent()
    {
        if (numStudents == 0)
        {
            cout << "No students to remove." << endl;
            return;
        }

        string name;
        cout << "Enter the name of the student to remove: ";
        cin.ignore();       // Ignore any leftover newline characters
        getline(cin, name); // Read the full line

        bool found = false;
        for (int i = 0; i < numStudents; ++i)
        {
            if (students[i]->getName() == name)
            {
                // Delete the student object
                delete students[i];

                // Remove the student by shifting all elements after it
                for (int j = i; j < numStudents - 1; ++j)
                {
                    students[j] = students[j + 1];
                }
                numStudents--;

                found = true;
                cout << "Student removed successfully." << endl;
                break;
            }
        }

        if (!found)
        {
            cout << "Student not found." << endl;
        }
    }
};

int main()
{
    string universityName;
    cout << "Enter the name of the university: ";
    getline(cin, universityName);

    University university(universityName);

    int choice;
    while (true)
    {
        cout << "\nUniversity Management Program Menu:" << endl;
        cout << "1. Add a new student" << endl;
        cout << "2. Display all students and scores" << endl;
        cout << "3. Display the best student(s) and score(s)" << endl;
        cout << "4. Remove a student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            university.addStudent();
            break;
        case 2:
            university.displayStudentsAndScores();
            break;
        case 3:
            university.displayBestStudents();
            break;
        case 4:
            university.removeStudent();
            break;
        case 5:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
