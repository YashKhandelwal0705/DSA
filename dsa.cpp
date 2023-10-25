// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* newNode(int data) {
//     Node* node = new Node;
//     node->data = data;
//     node->next = NULL;
//     return node;
// }

// void insertNewNode(Node** root, int data) {
//     Node* node = newNode(data);
//     Node* ptr;
//     if (*root == NULL) {
//         *root = node;
//     }
//     else {
//         ptr = *root;
//         while (ptr->next != NULL) {
//             ptr = ptr->next;
//         }
//         ptr->next = node;
//     }
// }

// void printLinkedList(Node* root) {
//     while (root != NULL) {
//         cout << root->data << " -> ";
//         root = root->next;
//     }
//     cout << "NULL" << endl;
// }

// Node* createLinkedList(int arr[], int n) {
//     Node* root = NULL;
//     for (int i = 0; i < n; i++) {
//         insertNewNode(&root, arr[i]);
//     }
//     return root;
// }

// int main() {
//     int arr[] = { 1, 2, 3, 4, 5 };
//     int n = 5;
//     Node* root = createLinkedList(arr, n);
//     printLinkedList(root);
//     return 0;
// }











// each element is double of its original value





// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
// int data;
// Node*next;
// };
// struct Node*newNode(int data) {
// Node* node = new Node;
// node->data = data;
// node->next = NULL;
// return node;
// }
// void insertNewNode(Node** root, int data) {
// Node* node = newNode(data);
// Node* ptr;
// if (*root == NULL) {
// *root = node;
// }
// else {
// ptr = *root;                                  
// while (ptr->next != NULL) {
// ptr = ptr->next;
// }
// ptr->next = node;
// }
// }
// void printLinkedList(Node* root) {
// while (root != NULL) {
// cout << root->data <<"  "<<root->next<< " -> ";
// root = root->next;
// }
// cout << "NULL" << endl;
// }
// Node*createLinkedList(int arr[], int n) {
// Node *root = NULL;
// for (int i = 0; i < n; i++) {
// insertNewNode(&root, arr[i]*2);
// }
// return root;
// }


// int main() {
// //int arr[] = { 1, 2, 3, 4, 5 }, n = 5;
// int n;
// cout<<"enter the value of n: ";
// cin>>n;
// cout<<"enter elements to array: ";
// int arr[n];
// for(int i=0;i<n;i++)
// {
// 	cin>>arr[i];
// }
// Node *root = createLinkedList(arr, n);
// printLinkedList(root);
// return 0;
// }












// // each element is sum of its original value and previous value

// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
// int data;
// Node*next;
// };
// struct Node*newNode(int data) {
// Node* node = new Node;
// node->data = data;
// node->next = NULL;
// return node;
// }
// void insertNewNode(Node** root, int data) {
// Node* node = newNode(data);
// Node* ptr;
// if (*root == NULL) {
// *root = node;
// }
// else {
// ptr = *root;                                  
// while (ptr->next != NULL) {
// ptr = ptr->next;
// }
// ptr->next = node;
// }
// }
// void printLinkedList(Node* root) {
// while (root != NULL) {
// cout << root->data <<"  "<<root->next<< " -> ";
// root = root->next;
// }
// cout << "NULL" << endl;
// }
// Node*createLinkedList(int arr[], int n) {
// Node *root = NULL;
// for (int i = 0; i < n; i++) {
// insertNewNode(&root, arr[i]);
// }
// return root;
// }


// int main() {
// //int arr[] = { 1, 2, 3, 4, 5 }, n = 5;
// int n;
// cout<<"enter the value of n: ";
// cin>>n;
// cout<<"enter elements to array: ";
// int arr[n];
// for(int i=0;i<n;i++)
// {
// 	cin>>arr[i];
// }
// int sum=0;
// for(int i=0;i<n;i++)
// {
// 	sum+=arr[i];
// 	arr[i]=sum;
// }
// Node *root = createLinkedList(arr, n);
// printLinkedList(root);
// return 0;
// }








// #include <iostream>

// struct Node
// {
//     int data;
//     Node *next;
// };

// void display(Node *node)
// {
//     while (node != nullptr)
//     {
//         std::cout << node->data << " ";
//         node = node->next;
//     }
//     std::cout << "\n";
// }

// int searchElement(Node *head, int item)
// {
//     Node *current = head;
//     int index = 0;
//     while (current != nullptr)
//     {
//         if (current->data == item)
//         {
//             return index;
//         }
//         current = current->next;
//         index++;
//     }
//     return -1;
// }

// int main()
// {
//     int item;

//     Node *head = nullptr;
//     Node *node2 = nullptr;
//     Node *node3 = nullptr;
//     Node *node4 = nullptr;

//     head = new Node;
//     node2 = new Node;
//     node3 = new Node;
//     node4 = new Node;

//     head->data = 10;
//     head->next = node2;

//     node2->data = 15;
//     node2->next = node3;

//     node3->data = 20;
//     node3->next = node4;

//     node4->data = 25;
//     node4->next = nullptr;

//     std::cout << "Linked List: ";
//     display(head);

//     std::cout << "Enter element to search: ";
//     std::cin >> item;

//     int index = searchElement(head, item);

//     if (index == -1)
//         std::cout << "Item not found";
//     else
//         std::cout << "Item found at position: " << index + 1;

//     // Free the allocated memory
//     delete head;
//     delete node2;
//     delete node3;
//     delete node4;

//     return 0;
// }




// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//   int data;
//   struct Node *next;
// };

// void display (struct Node *node)
// {

//   //as linked list will end when Node is Null
//   while (node != NULL)
//     {
//       printf ("%d ", node->data);
//       node = node->next;
//     }
//   printf ("\n");
// }

// int searchElement (struct Node *head, int item, int index)
// {
//   // Base case
//   if (head == NULL)
//     return -1;

//   // If data is present in current node, return true
//   if (head->data == item)
//     return index;

//   // not present here will check for next position
//   // in next recursive iteration
//   index++;

//   // Recur for remaining list
//   return searchElement (head->next, item, index);
// }

// int main ()
// {
//   int item;

//   //creating 4 pointers of type struct Node
//   //So these can point to address of struct type variable
//   struct Node *head = NULL;
//   struct Node *node2 = NULL;
//   struct Node *node3 = NULL;
//   struct Node *node4 = NULL;

//   // allocate 3 nodes in the heap 
//   head = (struct Node *) malloc (sizeof (struct Node));
//   node2 = (struct Node *) malloc (sizeof (struct Node));
//   node3 = (struct Node *) malloc (sizeof (struct Node));
//   node4 = (struct Node *) malloc (sizeof (struct Node));


//   head->data = 10;		// data set for head node 
//   head->next = node2;		// next pointer assigned to address of node2 

//   node2->data = 15;
//   node2->next = node3;

//   node3->data = 20;
//   node3->next = node4;

//   node4->data = 25;
//   node4->next = NULL;

//   printf ("Linked List: ");
//   display (head);

//   printf ("Enter element to search: ");
//   scanf ("%d", &item);

//   int index = searchElement (head, item, 0);

//   if (index == -1)
//     printf ("Item not found");
//   else
//     printf ("Item found at position: %d", index + 1);

//   return 0;
// }






// #include <iostream>

// struct Node
// {
//     int data;
//     Node *next;
// };

// void display(Node *node)
// {
//     while (node != nullptr)
//     {
//         std::cout << node->data << " ";
//         node = node->next;
//     }
//     std::cout << "\n";
// }

// int searchElement(Node *head, int item, int index)
// {
//     // Base case
//     if (head == nullptr)
//         return -1;

//     // If data is present in current node, return index
//     if (head->data == item)
//         return index;

//     // Not present in the current node, check in the next position
//     index++;

//     // Recur for the remaining list
//     return searchElement(head->next, item, index);
// }

// int main()
// {
//     int item;

//     Node *head = nullptr;
//     Node *node2 = nullptr;
//     Node *node3 = nullptr;
//     Node *node4 = nullptr;

//     head = new Node;
//     node2 = new Node;
//     node3 = new Node;
//     node4 = new Node;

//     head->data = 10;
//     head->next = node2;

//     node2->data = 15;
//     node2->next = node3;

//     node3->data = 20;
//     node3->next = node4;

//     node4->data = 25;
//     node4->next = nullptr;

//     std::cout << "Linked List: ";
//     display(head);

//     std::cout << "Enter element to search: ";
//     std::cin >> item;

//     int index = searchElement(head, item, 0);

//     if (index == -1)
//         std::cout << "Item not found";
//     else
//         std::cout << "Item found at position: " << index + 1;

//     // Free the allocated memory
//     delete head;
//     delete node2;
//     delete node3;
//     delete node4;

//     return 0;
// }




/*Problem statement:
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/



class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        if (k == 0) {
        return;
        }
        int* temp = new int[n];
        for(int i = 0; i < n; i++) {
        temp[i] = nums[i];
        }
        if (k < n) {
                for(int i = 0; i < n - k; i++) {
                nums[i + k] = temp[i];
                }
                for(int i = n - k; i < n; i++) {
                nums[i - n + k] = temp[i];
                }                
        }
        else {
                for(int i = 0; i < k - n; i++) {
                nums[i + n] = temp[i];
                }
                for(int i = k - n; i < n; i++) {
                nums[i - k + n] = temp[i];
                }                
        }
        delete[] temp;
   }
};


/*problem statemnt :
Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x.*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0){
            return false;
        }
        while(n%3==0){
            n=n/3;
        }
        return n==1;
    }
};





/*Problem statement:
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/



#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        bool foundDuplicate = false;

        for (int j = 0; j < nums.size(); j++) {
            if (i != j && nums[j] == num) {
                foundDuplicate = true;
                break;
            }
        }

        if (!foundDuplicate) {
            return num;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};
    int single = singleNumber(nums);
    
    if (single != -1) {
        std::cout << "The single number is: " << single << std::endl;
    } else {
        std::cout << "No single number found." << std::endl;
    }

    return 0;
}


//second approach

#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result = result ^ num;
    }
    return result;
}

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};
    int single = singleNumber(nums);
    std::cout << "The single number is: " << single << std::endl;
    return 0;
}




//Tower of Hanoi

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void tower(int a,char source,char auxiliary,char destination){
    if(a==1){
        cout << a << " MOVED FROM " << source << " to " << destination << endl; 
        return;
    }
    
    tower(a-1,source ,destination,auxiliary);
        cout << a << " MOVED FROM " << source << " TO " << destination << endl;
    
    
    
    tower(a-1,auxiliary,source,destination);   
    
}

int main() {
    int a;
    cout << "enter number of disks";
    cin >>a;
    tower(a,'A','B','C');
    return 0;
}

