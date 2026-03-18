



 #ifndef StudentGrade_H_  
 #define StudentGrade_H_ 

 #include<iostream>
 #include<string>
 using namespace std;

 
class Student {

    string name;
    int roll_no;
    float marks;
    char grade;

public:

   void set_name(string Name){
    name = Name;
   }

   void set_rollno(int RollNo){
    roll_no = RollNo;
   }

   void set_Marks(float Marks){
    marks = Marks;
   }


   void get_name(){
    cout<<name;
   }

   void get_rollno(){
    cout<<roll_no;
   }

   float get_marks(){
    return marks;
   }

    





};
#endif 