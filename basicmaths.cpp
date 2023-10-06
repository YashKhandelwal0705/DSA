/*Problem stattment 1 : 
You are given a number ’n’.
Find the number of digits of ‘n’ that evenly divide ‘n’.
Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.
*/

int countDigits(int n){
	// Write your code here.
	int count=0;
	int temp=n;
		while(temp>0) {
			int ld=temp%10;
            if(ld>0 && n%ld==0){
             count = count + 1;
            }
			temp=temp/10;
        }
		return count; 
}			
	



/*Problem Statement 2:
 Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
 Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

 




class Solution {
public:
      int reverse(int x) {
            
          long reversed = 0;
            while (x) {
          int digit = x % 10;
            reversed = reversed* 10 + digit;
               x /= 10;
              }
             if (reversed > INT_MAX || reversed < INT_MIN) {
              return 0;
              }
          return reversed;
}
    };


