#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    double totalMarks = 0.0;
    double obtainedMarks = 0.0;

   
    cout << "Enter the number of subjects: "; // enter the number of subjects
    cin >> numSubjects;

    
    for (int i = 1; i <= numSubjects; i++) {
        double subjectMarks;
        
       
        cout << "Enter marks for Subject " << i << ": ";
        cin >> subjectMarks;

        totalMarks += 100.0; 
        obtainedMarks += subjectMarks;
    } // we used to loop to get the marks of subjects to reduce the line of codes

    
    double percentage = (obtainedMarks / totalMarks) * 100.0; // formula to generate the percentage

   
    cout << "Percentage in First Semester: " << percentage << "%" << std::endl; // will show result

    return 0;
}
