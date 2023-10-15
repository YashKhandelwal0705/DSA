/*Problem Statement 1:
You are given an integer ‘n’.
Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.*/

vector<int> printNos(int x) {
    // Write Your Code Here
   if (x == 0) {
       return std::vector<int>();
   } else {
       std::vector<int> arr = printNos(x - 1);
       arr.push_back(x);
       return arr;
   }
}


/*Problem statement 2:
You are given an integer ‘n’.
Return an array having “Coding Ninjas” ‘n’ times, without using a loop.
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> getArray(int n) {
    if (n == 0) {
        return vector<string>();
    } else {
        vector<string> result = getArray(n-1);
        result.push_back("Yash");
        return result;
    }
}

int main() {
    int n = 5;
    vector<string> result = getArray(n);
    for (string s : result) {
        cout << s << " ";
    }
    return 0;
}