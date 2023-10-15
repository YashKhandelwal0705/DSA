/*problem statemnt :
Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.
*/

class Solution {
public:
    bool checkString(string s) {
      for(int i=0;i<s.size()-1;i++){
        if(s[i]=='b'&&s[i+1]=='a')
        return false;
      }
      return true;
    }
};
 



/*Problem Statement:
write a chahracter that takes a char as input and prints 1, 0 or -1 as reuired.

*/






#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
	cin >> ch;	      
	if (ch >= 'A' && ch <= 'Z') {
	cout << 1 << endl;
	}
	else if (ch >= 'a' && ch <= 'z') {
		cout << 0 << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}
	

