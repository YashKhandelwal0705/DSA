//PAIRS

// #include<bits/stdc++.h>
// using namespace std;


// void explainPair(){
//     pair < int , int> p = {1,3};
//     cout << p.first << " " << p.second << endl;

//     pair<int, pair<int ,int>> p1={1,{3,2}};
//     cout << p1.first << " " << p1.second.first <<" " << p1.second.second << endl;

//     pair <int ,int> arr[] ={{1,2},{3,5},{6,7}};
//     cout << arr[1].second;
// }


// int main(){
//     explainPair();
//     return 0;
// }



//VECTORS


// #include<bits/stdc++.h>
// using namespace std;

// void explainVector(){
//     vector<int>v;
//     v.push_back(1);
//     v.emplace_back(2);

// }

// int main(){
//     explainVector();
//     return 0;
// }


//ITERATORS


vector<int>::iterator it = v.begin();

it++;
cout << *(it) << " ";

it = it + 2;
cout << *(it) << " ";

vector<int>::iterator it = v.end();

vector<int>::iterator it = v.rend();

vector<int>::iterator it = v.rbegin();