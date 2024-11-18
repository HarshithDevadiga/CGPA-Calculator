#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // For setting output precision

using namespace std;

// Function to convert letter grade to grade points
float gradeToPoints(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'A-': return 3.7;
        case 'B+': return 3.3;
        case 'B': return 3.0;
        case 'B-': return 2.7;
        case 'C+': return 2.3;
        case 'C': return 2.0;
        case 'C-': return 1.7;
        case 'D+': return 1.3;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

int main() {
    int numCourses;
    float totalCredits = 0.0, weightedGradePoints = 0.0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<string> courseNames(numCourses);
    vector<char> grades(numCourses);
    vector<int> creditHours(numCourses);

    for (int i = 0; i < numCourses; ++i) {
        cout << "\nEnter details for Course " << i + 1 << endl;
        cout << "Course Name: ";
        cin.ignore();  // To clear the newline character from input buffer
        getline(cin, courseNames[i]);

        cout << "Grade (A, A-, B+, B, etc.): ";
        cin >> grades[i];

        cout << "Credit Hours: ";
        cin >> creditHours[i];

        // Convert grade to grade points
        float gradePoints = gradeToPoints(grades[i]);

        // Update weighted sum of grade points
        weightedGradePoints += gradePoints * creditHours[i];
        totalCredits += creditHours[i];
    }

    // Calculate CGPA
    float cgpa = weightedGradePoints / totalCredits;

    // Output CGPA rounded to two decimal places
    cout << "\nYour CGPA is: " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}
