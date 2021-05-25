class Node:
    # function to initialize the node object
    def __init__(self, data):
        self.data = data     # assign data
        self.next = None     # Initialize next as null



class Linkedlist:
    # Function to initialize the liked list object
    def __init__(self):
        self.head = None



if __name__ == '__main__':
    # start with the empty list
    llist = Linkedlist()

    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    llist.head.next = second     # link first node with second 

    second.next = third          # link second node with third