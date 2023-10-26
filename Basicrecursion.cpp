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

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

int main(){
    int n;
    cin >>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    reverseArray(0,arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
