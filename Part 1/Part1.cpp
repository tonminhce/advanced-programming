#include <iostream>
#include <string>

using namespace std;

// Maximum number of students
const int MAX_STUDENTS = 100;

// Array to store student names
string students[MAX_STUDENTS];

// Current number of students
int numStudents = 0;

void addStudent();
void displayStudents();
void removeStudent();
void displayMenu();

int main() {
    int choice;
    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                removeStudent();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

void addStudent()
{
    if (numStudents < MAX_STUDENTS)
    {
        string name;
        cout << "Enter the name of the student: ";
        cin.ignore();
        getline(cin, name);
        students[numStudents++] = name;
        cout << "Student added successfully." << endl;
    }
    else
    {
        cout << "Maximum number of students reached." << endl;
    }
}

void displayStudents()
{
    if (numStudents == 0)
    {
        cout << "No students to display." << endl;
    }
    else
    {
        cout << "List of all students:" << endl;
        for (int i = 0; i < numStudents; ++i)
        {
            cout << i + 1 << ". " << students[i] << endl;
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
    cin.ignore();      
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < numStudents; ++i)
    {
        if (students[i] == name)
        {
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

void displayMenu()
{
    cout << "\nStudent Management Program Menu:" << endl;
    cout << "1. Add a new student" << endl;
    cout << "2. Display all students" << endl;
    cout << "3. Remove a student" << endl;
    cout << "4. Exit" << endl;
}
