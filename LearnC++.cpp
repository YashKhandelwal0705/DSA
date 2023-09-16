// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
//  #endif
//  return 0;
// }






// #include<iostream>
// using namespace std;
// int main(){
//     cout<< "Hey Yash!"  << endl <<  "ji" << endl;
//     cout<< "Hey Yah!";
//   return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin >> x >> y;
//     cout << "Value of x: " << x << " and y: " << y;
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin >> s1 >> s2;
//     cout << s1 << " " << s2;
//   return 0;
// }


// WAP TO CHECK ADULT OR NOT
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cin >> age;
//     if (age >= 18) {
//         cout << "You are an adult";
//     }
//     else if(age<18) {
//         cout <<"you aren't an adult";
//     }
//   return 0;
// }


// WAP FOR SCHOOL GRADING SYSTEM


// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cin >> marks;
   
//     if (marks < 25) {
//         cout << "F";
//     }
//     else if(marks >=25 && marks<=44) {
//         cout <<"E";
//     }
//     else if(marks >=45 && marks<=49) {
//         cout <<"D";
//     }
//     else if(marks >=58 && marks<=59) {
//         cout <<"C";
//     }
//     else if(marks >=60 && marks<=79) {
//         cout <<"B";
//     }
//     else if(marks >=80 && marks<=100) {
//         cout <<"A";
//     }
//   return 0;
// }

//ALTERNATE METHOD

// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cin >> marks;
   
//     if (marks < 25) {
//         cout << "F";
//     }
//     else if(marks<=44) {
//         cout <<"E";
//     }
//     else if(marks<=49) {
//         cout <<"D";
//     }
//     else if(marks<=59) {
//         cout <<"C";
//     }
//     else if(marks<=79) {
//         cout <<"B";
//     }
//     else if(marks<=100) {
//         cout <<"A";
//     }
//   return 0;
// }



//WAP FOR JOB AND RETIREMENT AGE

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cin >> age;
   
//     if (age < 18) {
//         cout << "not eligible for job";
//     }
//     else if(age<=57) {
//         cout <<"eligible for job";
//         if(age>=55) {
//             cout<<", but retiremnt soon.";
//         }
//     }
//     else  {
//         cout <<"reirement soon.";
//     }
 
//   return 0;
// }




// SWITCH STATMENT IN C++
 
// WAP TO PRINT DAYS OF THE WEEK

// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cin >> day;
//     switch(day){

//         case 1:
//             cout<< "Monday";
//             break;
//         case 2:
//             cout<< "Tuesday";
//             break;
//         case 3:
//             cout<< "Wednesday";
//             break;
//         case 4:
//             cout<< "Thursday";
//             break;
//         case 5:
//             cout<< "Friday";
//             break;
//         case 6:
//             cout<< "Saturday";
//             break;
//         case 7:
//             cout<< "Sunday";
//             break;
//         default:
//             cout << "Invalid!";
//     }
//     return 0;
// }





//ARRAYS

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr[1]>> arr[2] >> arr[3]>> arr[4];
//     arr[4]+=10;
//     cout << arr[4];
//     return 0;
// }



//2D ARRAY

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][5];
//     arr[1][3]=99;
//     cout << arr[1][2];
//     return 0;
// }



//STRINGS


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "Yash";
//     cout << s[1];
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "Yash";
//     int len =s.size();
//     cout << s[len-2];
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "Yash";
//     int len =s.size();
//     s[len-1]='h';
//     cout << s[len-2];
//     return 0;
// }


//FOR LOOP

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout << "Yash" << endl;
//     cout << "Yash" << endl;
//     cout << "Yash" << endl;
//     cout << "Yash" << endl;
//     cout << "Yash" << endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i+=1) {
//         cout << "Yash" << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     for(i=5;i>=0;i-=1) {
//         cout << "Yash"  << i << endl;
//     }
//     return 0;
// }



//WHILE LOOP


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i=7;
//     while(i>=0) {
//         cout << "Yash"  << i << endl;
//         i-=1;
//     }
//     return 0;
// }


//DO WHILE LOOP

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i=2;
//     do {
//         cout << "Yash"  << i << endl;
//         i+=1;
//     }
//     while(i<=1) ;
//         cout << i << endl;
//     return 0;
// }



//FUNCTIONS

// #include<bits/stdc++.h>
// using namespace std;
// void PrintName(string name){
//     cout << "Hey" << name << endl;
//     }
// int main(){
//     string name;
//     cin >> name;
//     PrintName(name);

//     string name2;
//     cin >> name2;
//     PrintName(name2);

//     return 0;
// }


// SUM OF TWO NUMBERS


// #include<bits/stdc++.h>
// using namespace std;
// void sum(int a, int b){
//     int s;
//     s=a+b;
//     cout << s;
//     }
// int main(){
//     int n1,n2;
  
//     cin >> n1 >> n2;
//     sum(n1,n2);

//     return 0;
// }


//MAXIMUM BW TWO NUMBERS




// #include<bits/stdc++.h>
// using namespace std;

// int maxx(int num1,int num2){
//     if (num1>=num2) return num1;
//     else return num2;
// }
// int main(){
//     int num1,num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1,num2);
//     cout << maximum;
//     return 0;
// }
  


// #include<bits/stdc++.h>
// using namespace std;

// int maxx(int num1,int num2){
//     if (num1>=num2) {
//         return num1;
//     }   
// }
// int main(){
//     int num1,num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1,num2);
//     cout << maximum;
//     return 0;
// }






//PASS BY VALUE FUNCTION

// #include<bits/stdc++.h>
// using namespace std;
// void doSomething(int num){
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }
// int main(){
//     int num =10;
//     doSomething(num);
//     cout << num;
//     return 0;


// }




// #include<bits/stdc++.h>
// using namespace std;
// void printname(string s){
//     s[0] ='j';
//     cout << s << endl;
// }
// int main(){
//     string s= "Yash";
//     printname(s);
//     cout << s << endl;
//     return 0;
// }





//PASS BY RAFERNCE FUNCTION



// #include<bits/stdc++.h>
// using namespace std;
// void printname(string &s){
//     s[0] ='j';
//     cout << s << endl;
// }
// int main(){
//     string s= "Yash";
//     printname(s);
//     cout << s << endl;
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// void printarray(int arr[],int n){
//     arr[0] +=100;
//     cout << "Value inside function(): " << arr[0] <<  endl;
// }
// int main(){
//     int n=5;
//     int arr[n];
//     for(int i=0;i<=n-1;i+=1){
//         cin >> arr[i];
//     }
// printarray(arr,n);

//    cout << "Value inside main(): " << arr [0] << endl;
//    return 0;
// }







