#ifndef gradeCalculation_file_H
#define gradeCalculation_file_H
#include"StudentGrade.h"


using namespace std;

Student s;
float MARKS = s.get_marks();

class Grade_Calsi{

char Grade;

public:    

void set_grade(float Marks){

    

    if(Marks >= 90 && Marks <= 100){
        Grade = 'A';
    }else if(Marks >= 80 && Marks <= 89){
        Grade = 'B';
    }else if(Marks >= 70 && Marks <= 79){
        Grade = 'C';
    }else if(Marks >= 60 && Marks <= 69){
        Grade = 'D';
    }else Grade = 'F';

}


 
   void grade_display(){
    cout<<Grade;
   }

};






#endif