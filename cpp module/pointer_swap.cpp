/* Q6. Pointer Swap
Declare three integer variables: x = 10, y = 20, z = 30.
Create three pointers px, py, pz pointing to them.
Using only pointer dereferencing (no direct use of x, y, z after declaration):
Swap the values of x and z.
Print all three variables before and after the swap.
Also print the addresses stored in each pointer to conrm they did not change.
 */



#include<iostream>
using namespace std;

int main(){

int x= 10, y = 20, z = 30;

int *px,*py,*pz;

px = &x;
py= &y;
pz = &z;

cout<<x<<endl<<y<<endl<<z<<endl;

cout<<px<<endl<<py<<endl<<pz<<endl;

int temp;
temp = *px;
*px = *pz;
*pz = temp;

cout<<x<<endl<<y<<endl<<z<<endl;



cout<<px<<endl<<py<<endl<<pz;

    return 0;
}