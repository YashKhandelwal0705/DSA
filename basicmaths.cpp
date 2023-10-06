// Problem stattment 1 : 
// You are given a number ’n’.
// Find the number of digits of ‘n’ that evenly divide ‘n’.
// Note:
// A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.


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
	





