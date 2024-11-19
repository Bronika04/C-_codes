#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

int fib(int a){
    if(a==0){                                                                  // 0 1 1 2 3 5 8 ....
        return 0;
    }
    if((a>0)&&(a<=2)){
        return 1;
    }
    return fib(a-2)+fib(a-1);
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
   // cout<<"The factorial of "<<a<< "  is "<<factorial(a)<<endl;
    cout<<"The term of "<<a<< " is "<<fib(a)<<endl;
    return 0;
}