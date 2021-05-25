#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

// Program to create a simple linked list with 3 nodes

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    // Assign data in first node 
    head->data = 1;         
    head->next = second;

    
    // assign data to second node
    second->data = 2;
    second->next = third;

    // assign data to third node
    third->data = 3;
    third->next = NULL;   /* next pointer 
    of the third block is made NULL to indicate 
    that the linked list is terminated here */

    return 0;
}