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





/*Problem statement 3:
Given an integer x, return true if x is a 
palindrome
, and false otherwise.
*/


class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long revNum=0;
        while(temp>0){
            int ld=temp%10;
            temp=temp/10;
            revNum=revNum*10 +ld;
        }
        if (revNum==x){
            return true;
        }
        else
            return false;

    }
};







/*Problem Statement 4:
check armstrong number*/


bool isArmstrong(int n) {
    int temp = n;
    int count = 0;
    int sum = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }

    n = temp;

    while (n > 0) {
        int ld = n % 10;
        sum += pow(ld, count);
        n /= 10;
    }
    return (sum == temp);
}





