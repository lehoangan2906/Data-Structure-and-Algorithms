# This function is in LinkedList class
# Function to insert a new node at the beginning

def push(self, new_data):

    # 1 & 2: Allocate the node & put in the data
    new_node = Node(new_data)

    # make next of new Node as head
    new_node.next = self.head

    # move the head to point to new node
    self.head = new_node






# This function is in LinkedList class.
# Inserts a new node after the given prev_node. This method is
# defined inside LinkedList class shown above */

def insertAfter(self, prev_node, new_data):

    #check if the given prev_node exists
    if prev_node is None:
        print("The given previous ode must inLinkedList")
        return

    # create new node & put in the data
    new_node = Node(new_data)

    # make next of new Node as next of prev_node
    new_node.next = prev_node.next

    # make next of prev_node as new_node
    prev_node.next = new_node





# This function is defined in linked list class 
# append a a new node at the end 

def append(self, new_data):

    # 1. Create a new node
    # 2. Put in the data
    # 3. Set next as None
    new_node = Node(new_data)

    # if the linked list is empty, then make the new node as head
    if self.head is None:
        self.head = new_node
        return

    # else traverse till the last node 
    last = self.head
    while (last.next):
        last = last.next
    
    # change the next of last node
    last.next = new_node





