

# single unit in a linked list
class Element(object):
    def __init__(self,value):
        self.value = value
        self.next = None

class LinkedList(object):
    def __init__(self, head=None):
        # If we establish a new LinkedList without a head, it will default to None
        self.head = head

    def append(self, new_element):
        current = self.head
        if self.head:
            # LinkedList already has a head, iterate through the next reference in every Element until you reach the end of the list
            while current.next:
                current = current.next
            # Set next for the end of the list to be the new_element
            current.next = new_element
        else:
            # there is no head already, you should just assign new_element to it and do nothing else
            self.head = new_element