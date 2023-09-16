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








