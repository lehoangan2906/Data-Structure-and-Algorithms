#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};


// add a new node in front of the linked list
void push (Node** head_ref, int new_data){

    Node* new_node = new Node();

    new_node-> data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}


// insert a new node after the given prev_node
void insertAfter(Node* prev_node, int new_data){

    if(prev_node == NULL){
        cout << "the given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;

}


// append a new node at the end
void append(Node** head_ref, int new_data){

    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    Node *last = *head_ref;

    while(last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
}


// function print contents of linkedlist starting from head
void printList(Node *node){
    while(node != NULL){
        cout <<" " <<node->data;
        node = node->next;
    }
}

// driver code
int main(){
    
    // start with the empty list
    Node* head = NULL;

    // insert 6. So linked list becomes 6->NULL
    append(&head, 6);

    // insert 7 at the beginning. So linked list becomes 7->6->NULL
    push(&head, 7);

    // insert 1 at the beginning. So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // insert 4 at the end. So liked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // insert 9, after 7. So linked list becomes 1->7->9->6->4->NULL
    insertAfter(head->next, 8);

    cout<< "Created linked list is:";
    printList(head);

    return 0;

}