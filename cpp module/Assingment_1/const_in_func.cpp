#include<iostream>
using namespace std;

const float pi = 3.14159f;

  // pi = 3.0f;   // after redeclaring pi its shows error as "does not name a type" not due to const because in global envirnment we only can declare ,define but cannot rdeclare.

float circleArea(float radius){

float area = pi*(radius*radius);
return area;

}


float circlePerimeter(float radius){

float perimeter = 2* pi * radius;
return perimeter;

}

int main(){

    float r;
cout<<"Enter the radius : ";
cin>>r;




cout<<"area and perimeter of circle is : "<<circleArea(r)<<" and "<< circlePerimeter(r);

// main(); after adding this line, its become recursive its called itself again and again.its run infinte


    return 0;
}