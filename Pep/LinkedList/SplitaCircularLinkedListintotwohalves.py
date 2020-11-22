# Split a Circular Linked List into two halves

class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

class CircularLinkedList:
    def __init__(self):
        self.head = Node(0)
        #self.head.next = self.head # Link to itself

    # To insert node at beginning of C-L-L
    def push(self,data):
        newNodeP = Node(data)
        self.head.next = newNodeP
        newNodeP.next = head
    
    def __contains__(self, data):
        current = self.head.next
        while current != self.head:
            if current.data == data: # Element found
                return True
            current = current.next
        return False

    # head1 , head2 are heads of the two resultant linkedlists
    def splitList(self, head1 , head2):
        slow = self.head
        fast = slow

        if self.head is None:
            return

        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next
        
        # Setting the ptrs
        head1.head = self.head

        if self.head.next != self.head: 
            head2.head = slow.next

        # 2nd half circular
        fast.next = slow.next
        # 1st half circular
        slow.next = self.head


    # Function to print nodes in a given circular linked list 
    def printList(self): 
        temp = self.head 
        if self.head is not None: 
            while(True): 
                print (temp.data), 
                temp = temp.next
                if (temp == self.head): 
                    break 





head = CircularLinkedList()  
head1 = CircularLinkedList() 
head2 = CircularLinkedList() 
  
head.push(12) 
head.push(56) 
head.push(2) 
head.push(11) 
  

  
# Split the list  
head.splitList(head1 , head2) 
  

        