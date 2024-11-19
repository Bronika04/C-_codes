#include<iostream>
using namespace std;
typedef struct employee{
    int eID;
    char favChar;
    float salary;
} ep;

union money{
    int rice;
    char car;
    float pounds;
};

int main(){
    enum Meal{breakfast, lunch, dinner};        // provide no. starting from 0
    cout<<breakfast<<endl;  //0
    cout<<lunch<<endl;      //1
    cout<<dinner<<endl;     //2


    ep harry;
    union money m1;
    m1.rice = 34;
    m1.car ='d';          // if this is comment out we will get  34 value of next line output  
    cout<<m1.rice<<endl;;       // garbage value
    ep shubham;
    struct employee rohandas;

    harry.eID = 1;
    harry.favChar = 'c';
    harry.salary = 1200000000;
    cout<<"The value is "<<harry.eID<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;



    
    return 0;
}