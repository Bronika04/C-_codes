#include<iostream>
using namespace std;
// 1                              0C0
// 1   1                          1C0     1C1
// 1   2   1                      2C0     2C1       2C2
// 1   3   3   1                    ----    ----    ------
// 1   4   6   4   1                   ---  ----    -----

int fact(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}