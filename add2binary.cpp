#include<iostream>
using namespace std;
// // int addbinary(int a, int b){
// //     int ans =0;
// //     int prevcarry = 0;

// //     while(a>0 && b>0){
// //         if(a%2 == 0 && b%2 == 0)
// //         {
// //             ans = ans*10 + prevcarry;
// //             prevcarry = 0;
// //         }
// //         else if((a%2==0 && b%2 == 1) || (a%2==1 && b%2 == 0)){
// //             if (prevcarry == 1){
// //                 ans = ans*10 + 0;
// //                 prevcarry = 1;
// //             }
// //             else{
// //                 ans = ans*10 + 1;
// //                 prevcarry = 0;
// //             }
// //         }
// //         else{
// //             ans= ans*10 + prevcarry;
// //             prevcarry = 1;
// //         }
// //         a /=10;
// //         b /=10;
// //     }
// //     while(a>0){
// //         if (prevcarry ==1){
// //             ans = ans*10 +0;
// //             prevcarry = 1;
// //         }
// //         else{
// //             ans = ans*10 + 1;
// //             prevcarry = 0;
// //         }
// //     }
// // }

// // int main(){
    
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
//for converting the binary input into decimal
int binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while (n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n = n/10;
    }
    return ans;
    
}

int decimaltobinary(int n)
{

if(n==0){
return 0;
}
    if (n < 0) {
        n = abs(n);  // Convert negative number to positive
    }
return n % 2 + 10 * decimaltobinary(n/2);
}

int main() {
    int a, b;

    cin >> a >> b;

 int y= binarytodecimal(a);     //converting the first input into decimal number
 int z=binarytodecimal(b);      //converting the second  input into decimal number
int sum=y+z;                    //adding the two numbers
int addB=decimaltobinary(sum);  //converting the sum into binary number again
cout<<addB<<endl;



    return 0;
}











// /*
//  * This program takes 2 binary value as input,
//  * first convert both of them into decimal and then add them,
//  * and finally provide output in binary format
//  */

// // #include <stdio.h>
// // #include <stdlib.h>

// // int binary2decimal();
// // int decimal = 0;        // global variable

// // int main()
// // {
// //  int quotent;
// //  int binary[32];
// //  int i = 1;

// //    binary2decimal();              // calling binary2decimal function

// //    quotent = decimal;      // saving binary2decimal() return value in quotent

// //   while(quotent != 0){
// //   binary[i] = quotent % 2;
// //   quotent = quotent / 2;
// //   i++;
// //   }

// //   for(int j=i-1; j>0; j--){
// //    printf("%d", binary[j]);
// //   }

// // return 0;
// // }



// // int binary2decimal(){
// //  int num1, num2;
// //  int binary;
// //  int base = 1;
// //  int rem;

// //     printf("Enter first binary number <1s & 0s> : ");
// //     scanf(" %d", &num1);
// //     printf("Enter second binary number <1s & 0s> : ");
// //     scanf(" %d", &num2);

// //     binary = num1 + num2;

// //     while(binary > 0){
// //     rem = binary % 10;
// //     decimal = decimal + rem * base;
// //     binary /= 10;
// //     base = base * 2;
// //     }
// //  return decimal;
// // }






// class Solution {
// public:
//     string addBinary(string a, string b) {
//         int alen=a.length();
//         int blen=b.length();
//         int i=0, carry=0;
//         string ans="";
        
//         while (i<alen || i<blen || carry!=0){
//             int x=0;
//             if (i<alen && a[alen-i-1]=='1'){
//                 x=1;
//             }
            
//             int y=0;
//             if(i<blen and b[blen-i-1]=='1'){
//                 y=1;
//             }
//             ans=to_string((x+y+carry)%2) + ans;
//             carry=(x+y+carry)/2;q
//             i+=1;
//         }
//         return ans;
            
//     }
// };






//Leetcode 67 : Add Binary
//Detailed video explanation: https://youtu.be/SwPXgTiv8Ag
//==================================================

// //C++:
// class Solution {
// public:
//     string addBinary(string a, string b) {
//         string result;
//         int i = a.length()-1, j = b.length()-1;
//         int carry = 0;
//         while(i >= 0 || j >= 0){
//             int sum = carry;
//             if(i >= 0) sum += a[i--] - '0';
//             if(j >= 0) sum += b[j--] - '0';
//             carry = sum > 1 ? 1 : 0;
//             result += to_string(sum%2);
//         }
//         if(carry) result += to_string(carry);
//         reverse(result.begin(), result.end());
//         return result;
//     }
// };
// Java:
// public String addBinary(String a, String b) {
//         StringBuilder result = new StringBuilder();
//         int i = a.length()-1, j = b.length()-1;
//         int carry = 0;
//         while(i >= 0 || j >= 0){
//             int sum = carry;
//             if(i >= 0) sum += a.charAt(i--) - '0';
//             if(j >= 0) sum += b.charAt(j--) - '0';
//             carry = sum > 1 ? 1 : 0;
//             result.append(sum%2);
//         }
//         if(carry != 0) result.append(carry);
//         return result.reverse().toString();
//     }
// Python3:
// def addBinary(self, a: str, b: str) -> str:
//     result = ""
//     i, j, carry = len(a) - 1, len(b) - 1, 0
//     while i >= 0 or j >= 0:
//         sum = carry
//         if i >= 0: sum += ord(a[i]) - ord('0')
//         if j >= 0: sum += ord(b[j]) - ord('0')
//         i, j = i-1, j-1
//         carry = 1 if sum > 1 else 0
//         result += str(sum%2)
        
//     if carry != 0: result += str(carry)
//     return result[::-1]
        
