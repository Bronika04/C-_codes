#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter  the id "<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<id<<" and this is emplyee number "<<count<<endl;
        }
};

int Employee :: count; // default value is 0

int main(){
    Employee harry,rohan,lovish;
    //harry.id = 1;  error can not change private data
    //harry.count =1
    harry.setData();
    harry.getdata();

    rohan.setData();
    rohan.getdata();

    lovish.setData();
    lovish.getdata();
    
    
    return 0;
}