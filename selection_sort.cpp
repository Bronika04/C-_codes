#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){               //selection sort
    //     for(int j=i+1;j<n;j++){
    //     if(arr[j]<arr[i]){
    //         int temp = arr[j];
    //         arr[j]=arr[i];
    //         arr[i]=temp;
    //     }
    //     }
    // }

    // int counter=1;
    // while(counter<n){                     // bubble sort
    //     for(int i=0;i<n-counter;i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp = arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //         }
    //     }
    //     counter++;
    // }

    // for(int i=0;i<n;i++){               //selection sort
    //     for(int j=i+1;j<n;j++){                    
    //     if(arr[j]<arr[i]){                    
    //         int temp = arr[j];                   
    //         arr[j]=arr[i];
    //         arr[i]=temp;
    //     }
    //     }
  //  }
//     #include<stdio.h>
// int main(){
//     int arr[10]={9,8,5,6,2,4,1,6,3,4};
//     int i,j;
    // for(int i=0;i<n;i++){                            //simple sort
    //     for(int j=0;j<n;j++){                       // i>j    ascending
    //         if(arr[j]>arr[i]){
    //             int temp=arr[j];
    //             arr[j]=arr[i];

    //             arr[i]=temp;
    //         }
    //     }
    // }
//     printf("%d",arr[8]);
//     return 0;
// }
    for(int i=1;i<n;i++){                                 //Insertion sort
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}