
#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
    arr[0] +=100;
    cout << "Value inside function(): " << arr[0] <<  endl;
}
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<=n-1;i+=1){
        cin >> arr[i];
    }
printarray(arr,n);

   cout << "Value inside main(): " << arr [0] << endl;
   return 0;
}

