/* In this post, methods to insert a new node in linked list are discussed. A node can be added in three ways 
1) At the front of the linked list 
2) After a given node. 
3) At the end of the linked list.
*/





/* Given a reference (pointer to pointer)
to the head of a list and an int,
inserts a new node on the front of the list. */

void push(Node** head_ref, int new_data){

    // allocate node
    Node* new_node = new Node();

    // put in the data
    new_node->data = new_data;

    // make next of new node as head
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref) = new_node;
}






// Given a node prev_node, insert a new node 
// after the given prev_node

void insertAfter(Node* prev_node, int new_data){

    // Check if the given prev_node is NULL
    if(prev_node == NULL){
        cout <<"the given previous node cannot be NULL";
        return;
    }

    // allocate new node
    Node* new_note = new Node();

    // put in the data
    new_node->data = new_data;

    //make the next of new_node as next of prev_node
    new_node->next = prev_note->next;

    // move the next of prev_node as new_node
    prev_node->next = new_node;
}








// given a reference (pointer to pointer) to the head
// of a list and an int, appends a new node at the end

void append(Node* head_ref, int new_data){

    // 1. allocate node
    Node* new_node = new Node();
    
    // 2. put in the data
    new_node->data = new_data;

    // 3. this new node is going to be the lasr node, so
    // make of it as NULL
    new_node->next = NULL;

    // 4. if the linked list is empty,
    // then make the new node as head
    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    // used in step 5
    Node *last = *head_ref;

    // 5. Else traverse till the last node 
    while (last->next != NULL){
        last = last->next;
    }

    // 6. change the next of last node
    last->next = new_node;
    return;
}