// Write a C program that prints the size in bytes of each of the following types using sizeof:
// short int, int, long int, long long int, unsigned int, float, double, long double, char
// Then answer in a comment inside your code:
// Which two types have the same size on your machine? Does unsigned int have a dierent size than int?


#include<iostream>
using namespace std;
int main(){

    cout<<"size of int : "<<sizeof(int)<<endl;
    cout<<"size of float : "<<sizeof(float)<<endl;
    cout<<"size of double : "<<sizeof(double)<<endl;
    cout<<"size of short int : "<<sizeof(short int)<<endl;
    cout<<"size of unsigned int : "<<sizeof(unsigned int)<<endl;
    cout<<"size of long int : "<<sizeof(long int)<<endl;
    cout<<"size of long long int : "<<sizeof(long long int)<<endl;
    cout<<"size of long double : "<<sizeof(long double)<<endl;
    cout<<"size of char : "<<sizeof(char)<<endl;
   
// 1.In my machine, Size of int,float,unsigned int and long int is same which is equal to 4.
// 2. No, size of unsigned int and int is same thats is 4.




    return 0;
}