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


//STACK

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

