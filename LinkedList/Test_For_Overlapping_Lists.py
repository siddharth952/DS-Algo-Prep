'''
EPI:7.4
'''
class Node:
    def __init__(self, x):
        self.val = x
        self.next = None

def overlapping_no_cyclesList(L1:Node,L2:Node):
    def length(L:Node):
        length = 0
        while L:
            length+=1
            L = L.next
        return length

    L1_length,L2_length = length(L1),length(L2)

    # We assume L2 to be longer hence check if not and do the needful
    if L1_length > L2_length:
        L1,L2 = L2,L1

    # Advances longer list to get equal length list to get to overlap    
    for _ in range(abs(L1_length - L2_length)):
        L2 = L2.next

    while (L1 and L2) and (L1 != L2):
        L1,L2 = L1.next,L2.next
    return L1 # None then no overlapping present else will return where we overlap


if __name__ == "__main__":
    list1 = Node(1)
    list1.next = Node(2)
    list1.next.next = Node(3)

    list2 = Node(16)
    list2.next = Node(23)
    list2.next.next = Node(57)

    if not overlapping_no_cyclesList(list1,list2):
        print("No overlap")
    else:
        print("Overlap")