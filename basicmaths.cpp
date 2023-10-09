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








/*Problem statement 5:
You are given an integer ‘n’.
Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.
Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.
*/



int sumOfAllDivisors(int n){
	int totalSum = 0;
	 for(int i=1;i<=n;i++){
    	totalSum += (n/i)*i;
  }
		return totalSum;
}





/*Problem statement 6:Prime number check*/




bool isPrime(int n){
    if (n <= 1) {
		return false;
	}
	for (int i = 2; i*i <= n; i++) {
    	if (n % i == 0) {
    	return false;
    	}
	}
        return true;
}






/*Problem Statement7:
You are given two integers 'n', and 'm'.
Calculate 'gcd(n,m)', without using library functions.
*/

int calcGCD(int n, int m)
{
    int l , s;
     if (n == 0 || m == 0)
     {
       return 0;
     }
     
     if(n > m)
     {
       l = n;
       s = m;
     }
     else{
       l = m;
       s = n;
     }

     while(l%s != 0)
     {
       int temp = l%s;
       l = s;
       s = temp;
     }
    return s;
    
}




