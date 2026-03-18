#include<iostream>
#include<string>
#include "StudentGrade.h"
#include "gradeCalculation_file.h"
using namespace std;


int main(){

Student S;
Grade_Calsi G;

int choice;
 string name;
 int rollno;
 float marks;

do{

 cout << "\n===== MENU =====\n";
        cout << "1. Registration \n";
        cout << "2. Display Information \n";
        cout << "3. Calculate Your Grade\n";
        cout << "4. Exits\n";
        cout << "Enter your choice: ";
        cin >> choice;



 switch(choice) {

            case 1:
                cout << "Enter Name: ";
              getline(cin >> ws,name);
             S.set_name(name);

                cout << "Enter Roll Number : ";
                cin>>rollno;
                S.set_rollno(rollno);

                cout<<"enter marks : ";
                cin>>marks;
                 S.set_Marks(marks);


                 G.set_grade(marks);

                break;

            case 2: {
                
                cout<<"Your Details :"<<endl;

                cout<<"Name: ";
                 S.get_name();
                 cout<<endl;

                  cout<<"Roll No: ";
                 S.get_rollno();
                  cout<<endl;

                  cout<<"marks: ";
                 cout<<S.get_marks();
                   cout<<endl;

                  
                 
                
                
                break;
            }

            case 3:
                cout << "Your Grade: ";
                G.grade_display();
                
                break;

             case 4:
                cout << "Existing form Program ...\n";
                
                
                break;   

            default:
                cout << "Invalid choice!\n";
        }
  } while(choice != 4);




















    return 0;
}