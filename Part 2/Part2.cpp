#include <iostream>
#include <string>

using namespace std;

void displayMenu();
void addStudentAndScore(string *&names, int *&scores, int &numStudents);
void displayStudentsAndScores(string *names, int *scores, int numStudents);
void displayBestStudents(string *names, int *scores, int numStudents);

int main()
{
    string *names = nullptr;
    int *scores = nullptr;
    int numStudents = 0;
    int choice;

    while (true)
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudentAndScore(names, scores, numStudents);
            break;
        case 2:
            displayStudentsAndScores(names, scores, numStudents);
            break;
        case 3:
            displayBestStudents(names, scores, numStudents);
            break;
        case 4:
            cout << "Exiting program." << endl;
            delete[] names;
            delete[] scores;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

void displayMenu()
{
    cout << "\nStudent Management Program Menu:" << endl;
    cout << "1. Add a new student and score" << endl;
    cout << "2. Display all students and scores" << endl;
    cout << "3. Display the best student(s) and score(s)" << endl;
    cout << "4. Exit" << endl;
}

void addStudentAndScore(string *&names, int *&scores, int &numStudents)
{
    string name;
    int score;

    cout << "Enter the name of the student: ";
    cin.ignore();       // Ignore any leftover newline characters
    getline(cin, name); // Read the full line

    cout << "Enter the score of the student: ";
    cin >> score;
    string *tempNames = new string[numStudents + 1];
    int *tempScores = new int[numStudents + 1];
    for (int i = 0; i < numStudents; ++i)
    {
        tempNames[i] = names[i];
        tempScores[i] = scores[i];
    }

    tempNames[numStudents] = name;
    tempScores[numStudents] = score;
    delete[] names;
    delete[] scores;
    names = tempNames;
    scores = tempScores;
    numStudents++;

    cout << "Student and score added successfully." << endl;
}

void displayStudentsAndScores(string *names, int *scores, int numStudents)
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
            cout << i + 1 << ". " << names[i] << ": " << scores[i] << endl;
        }
    }
}

void displayBestStudents(string *names, int *scores, int numStudents)
{
    if (numStudents == 0)
    {
        cout << "No students to display." << endl;
        return;
    }
    int maxScore = scores[0];
    for (int i = 1; i < numStudents; ++i)
    {
        if (scores[i] > maxScore)
        {
            maxScore = scores[i];
        }
    }
    cout << "Best student(s) and their score(s):" << endl;
    for (int i = 0; i < numStudents; ++i)
    {
        if (scores[i] == maxScore)
        {
            cout << names[i] << ": " << maxScore << endl;
        }
    }
}
