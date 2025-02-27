#include<iostream>
using namespace std;

int sum (int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}


int sum (int a, int b,int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Volume of a cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}

// Volume of cube
int volume(int a){
    return a*a*a;
}

// volume of cuboid
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3,7 and 6 is "<<sum(3,6,7)<<endl;
    cout<<"the volume of cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube of side 3 "<<volume(3)<<endl;
    return 0;
}