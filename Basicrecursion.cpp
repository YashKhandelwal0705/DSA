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