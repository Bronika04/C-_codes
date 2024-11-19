#include<iostream>
using namespace std;

int main(){
    int marks[]={23,45,56,89};
    int mathsmarks[4];
    mathsmarks[0] = 12;
    mathsmarks[1] = 13;
    mathsmarks[2] = 14;
    mathsmarks[3] = 15;

    // cout<<"marks are: "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // mathsmarks[2]=20;         // can update or change value in arrays
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // cout<<"Mathsmarks are: "<<endl;
    // cout<<mathsmarks[0]<<endl;
    // cout<<mathsmarks[1]<<endl;
    // cout<<mathsmarks[2]<<endl;
    // cout<<mathsmarks[3]<<endl;

    // for(int i=0;i<4;i++){
    //     cout<<"The value at "<<i<<" index is "<<marks[i]<<endl;
    // }

    // int i=0;
    // while(i<4){
    //     cout<<"The value at "<<i<<" index is "<<marks[i]<<endl;  
    //     i++;
    // }

    int i=0;
    do{
        cout<<"The value at "<<i<<" index is "<<marks[i]<<endl;  
        i++;
    }while (i<4);

    //pointers and arrays
    int *p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}