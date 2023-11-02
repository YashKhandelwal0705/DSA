// /*Problem Statement 1:
// You are given an integer ‘n’.
// Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.*/

// vector<int> printNos(int x) {
//     // Write Your Code Here
//    if (x == 0) {
//        return std::vector<int>();
//    } else {
//        std::vector<int> arr = printNos(x - 1);
//        arr.push_back(x);
//        return arr;
//    }
// }


// /*Problem statement 2:
// You are given an integer ‘n’.
// Return an array having “Coding Ninjas” ‘n’ times, without using a loop.
// */


// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// vector<string> getArray(int n) {
//     if (n == 0) {
//         return vector<string>();
//     } else {
//         vector<string> result = getArray(n-1);
//         result.push_back("Yash");
//         return result;
//     }
// }

// int main() {
//     int n = 5;
//     vector<string> result = getArray(n);
//     for (string s : result) {
//         cout << s << " ";
//     }
//     return 0;
// }





// print sum of first n numbers


// #include<bits/stdc++.h>
// using namespace std;

// int printSum(int i,int sum){
//     if(i<1){
//         cout << sum;
//         return 0;
//     }
//     printSum(i-1,sum+i);
// }

// int main(){
//     int n;
//     cin >> n;
//     printSum(n,0);
//     return 0;
// }



//2nd approach

// #include<bits/stdc++.h>
// using namespace std;

// int printSum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n + printSum(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     printSum(n);
//     cout << printSum(n);
//     return 0;
// }





//print the factorial of n



// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }





//reverse array

// #include<bits/stdc++.h>
// using namespace std;

// void reverseArray(int i,int arr[],int n){
//     if(i>=n/2){
//         return;
//     }
//     swap(arr[i],arr[n-i-1]);
//     reverseArray(i+1,arr,n);
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     reverseArray(0,arr,n);
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



//check if string is a palindrome


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i,string& str) {
    if(i>=str.size()/2) return true;
    if(str[i]!=str[str.size()-i-1]) return false;
    return isPalindrome(i+1,str);
    }

int main(){
    string str;
    cin >> str;
    cout << isPalindrome(0,str);
    return 0;
}




/*The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).*/


class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int last=fib(n-1);
        int second_last=fib(n-2);
        return last+second_last;
    }
};