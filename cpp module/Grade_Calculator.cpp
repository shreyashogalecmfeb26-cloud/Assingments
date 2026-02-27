// A student appeared in 5 subjects. Store the marks of each subject as a float. Compute the total and percentage. Use the ternary operator (no if-else allowed) to determine and print the grade according to Print all subject marks, total, percentage, and grade.

#include <iostream>
using namespace std;
int main()
{

    float math, science, computer_science, operating_system, dbms;
    float outoff = 500.00;

    math = 54.4;
    science = 60.2;
    computer_science = 68.9;
    operating_system = 70.2;
    dbms = 66.9;

    cout << "math :" << math << endl<< "science" << science << endl<< "computer_science" << computer_science << endl<< "operating_system : " << operating_system << endl<< "dbms : " << dbms << endl;

    float total = math + science + computer_science + operating_system + dbms;

    cout << "total : " << total << endl;

    float percentage = (total / outoff) * 100;
    cout << "percentage : " << percentage << endl;

    char grade = ((percentage >= 75) ? 'A ' : (percentage >= 60) ? 'B' : (percentage >= 45) ? 'C':'F');

    cout << grade;

    return 0;
}