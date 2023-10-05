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


// vector<int>::iterator it = v.begin();

// it++;
// cout << *(it) << " ";

// it = it + 2;
// cout << *(it) << " ";

// vector<int>::iterator it = v.end();

// vector<int>::iterator it = v.rend();

// vector<int>::iterator it = v.rbegin();

// for (auto it=v.begin(); it !=v.end();it++){
//     cout <<*(it) <<" ";
// }


// for (auto it:v){
//     cout << *(it)<< " ";
// }




//DELETION IN A VECTOR

//{10,20,30,40}
// v.erase(v.begin()+1); // ==> {10,30,40}

//{10,20,30,40,50}
// v.erase(v.begin()+1,v.begin()+3); // ==> {10,40,50}    because [start,end)




//INSERT in a vector

// vector<int>v(2,100); //{100,100}

// v.insert(v.begin(),300); //{300,100,100}
// v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

// vector<int>copy(2,50); //{50,50}
// v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}


//{10,20}
// cout << v.size(); //2
// v.pop_back(); //{10}


//v1 -> {10,20}
//v2 -> {30,40}

// v1.swap(v2); // v2 -> {10,20}  v1 -> {30,40}

// v.clear(); //clear the entire vector

//cout << v.empty();



//LISTS

void listExplain(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); // {5,2,4}

    ls.emplace_front() ; {2,4}

    //rest all other functions work as vector( begin,end ,rbegin,rend, clear ,insert,size ,swap)
}



//DEQUEUE

void expliandequeue(){
    dequeue<int> dq;

    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}

    dq.push_front(4); // {4,1,2}

    dq.emplace_front(3) ; //{3,4,1,2}
    
    dq.pop_back(); //{3.4.1}
    dq.pop_front(); //{4,1}
    
    dq.back();
    dq.front();

    //rest all other functions work as vector (begin,end ,rbegin,rend, clear ,insert,size ,swap)
    
}


//STACK (LIFO)

void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout  << st.top(); //5
    st.pop(); //{3,3,2,1}

    cout << st.top(); //3
    cout<< st.size(); //4

    cout << st.empty();

    stack<int>st1,st2;
    st1.swap(st2);

    // all stack operations are O(1) operations
}



//QUEUE (FIFO)

void explainQueue(){
queue<int> q;
q.push(1); //{1}
q.push(2); //{1,2}
q.emplace(4); //{1,2,4}

q.back() += 5

cout << q.back()l //prints 9

// q is {1,2,9}
cout << q.front(); //1

q.pop(); //{2,9}

cout << q.front(); //2

//size , swap , empty same as stack

}


//PRIORITY

void exaplinPQ() {
    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); //prints 10

    pq.pop(); //{8,5,2}

    cout << pq.top(); //prints 8

    //size ,swap,empty function same as others

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout  << pq.top(); //prints 2

}




//SET (sorted, unique)

void explainSet(){
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2);//{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //Functionality of insert in vector 
    //can be used that only increases efficiency
    //begin(),end(), rend(), rbegin(), size(),empty()and swap() are same as that in vector


    //{1,2,3,4,5}
    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it =st.find(6);

    //{1,2,5}
    st.erase(5); //erases 5

    int cnt =st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
    auto it1 =st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} {first,last}

    //lower_bound() and upper_bound() works in same way as vecotr

    auto it =st.lower_bound(2);
    auto it =st.upper_bound(3);



// in Set, everthing taes place in logarithmic time complexity i.e. log(n).
}



//MULTISET


void explainMultiSet() {
    //everthing same as set 
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); // all 1's erased

    int cnt =ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1));


    ms.erase(ms.find(1), ms.find(1)+2);

    //rest all functions are same as set

}




//UNORDERED SET

void explainUSet(){
    // lower_bound and upper_bound function does not work, rest all functions are same as above
    // It does not store in any particular order
    // it has a better complexity than set in most cases, except some collision happens
}





//MAP

void explainMap(){

    map<int , int> mpp;

    map <int , pari<int,int>> mpp;         //  different ways to store values

    map<pair <int,int> , int> mpp;


    mpp[1]=2;
    mpp.emplace({3,1});

    mpp.insert({2,4});

    mpp[{2,3}] =10;

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it =mpp.find(3);
    cout << *(it).second;

    auto it =mpp.find(5);

    auto it =mpp.lower_bound(2);

    auto it =mpp.upper_bound(3);

    //erase,swap,size,empty are same as above
}



//MULTIMAP

void MultiMap(){
    //everything same as amap , only it can store multiple keys
    //only mpp[key] cannot be used here
}


//UNORDERED MAP

void explainUnorderedMap(){
    //same as set and unordered_set difference.
}




//SORTING
void explainSort(){

    sort(a,a+n);
    sort(v.begin(),v.end());

    sort(a+2,a+4);
    sort(a,a+n,greater<int>);
}




for example -->

EXAMPLE 1 -->
#include <bits/stdc++.h>
using namespace std;
int main() {

int n,i;
cin >> n;
int arr[n];
for (i=0;i<n;i++){
    cin >> arr[i];
}
for (i=0;i<n;i++){
    cout << arr[i] << " ";
}

sort(arr,arr+n);
cout << "Sorted array:";
for (i=0;i<n;i++){
    cout  << arr[i] << " ";
}
    return 0;

}

EXAMPLE 2--> 


#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if (p1.second > p2.second) return false ;

    if (p1.first > p2.first) return true;
    return false;
}

int main() {
    int n = 3;

    pair <int,int> a[]= {{1,2},{2,1},{4,1}};

    //sort it according to second element
    // if second element is same , then sort it according to first element in descending order

    sort(a,a+n,comp);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i].first << "," << a[i].second << " ";
    }
    cout << endl;

    return 0;
}







//COMMON FUNCTIONS
void explainExtra(){
    int num=7;
    int cnt= __builtin_popcount();

    long long num = 137834767843;
    int cnt =__builtin_popcountll();

    string s="123";
    sort(s.begin,s.end());

    do {
        cout << s << endl;
    }while (next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n);
}