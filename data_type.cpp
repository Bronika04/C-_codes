#include<iostream>
using namespace std;

int main(){
    int a;
    a=12;

    cout<<"The size of int "<<sizeof(a)<<endl; //4

    float b;
    cout<<"The size of float "<<sizeof(b)<<endl;//4

    char c;
    cout<<"The size of character "<<sizeof(c)<<endl;//1

    bool d;
    cout<<"The size of boolean "<<sizeof(d)<<endl;//1

    short int si;
    long int li;
    cout<<"size of short int "<<sizeof(si)<<endl; //2
    cout<<"size of long int "<<sizeof(li)<<endl; //4

    //cout<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(d);
    return 0;
}