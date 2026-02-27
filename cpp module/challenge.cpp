#include<iostream>
using namespace std;


int absolute(int n){

return n<0?n*(-1):n;

}

int  clamp(int val, int lo, int hi){

 return (val<lo)?lo:(val>hi)?hi:val;;
   


}

int main(){

    int val,lo,hi;
    cout<<"enter the values of val,lo and hi : ";
    cin>>val>>lo>>hi;

   cout<< absolute(val)<<endl;

   cout<<clamp(val,lo,hi);
    


    return 0;
}