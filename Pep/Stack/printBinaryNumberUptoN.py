from queue import Queue

# Build a tree upto N elements
# Tree

class Node:
    def __init__(self, value):
        self.left = None
        self.data = value
        self.right = None

class Tree:
    """
    Class Tree will provide a tree as well as utility funtions
    """
    def createNode(self, data):
        return Node(data)

    def insert(self, node, data):
        """
        Insert a node into tree
        """
        # If Tree is empty , return root node
        if node is None:
            return self.createNode(data)
        # If data is smaller than parent insert into left
        if data < node.data:
            node.left = self.insert(node.left, data)
        elif data > node.data:
            node.right = self.insert(node.right, data)
        
        return node

    def levelOrder(self, root):
        """
        traverse in level order ie, Also Breath First manner
        """
        if root is None:
            return
        # We use a Queue
        # Go left, insert left , go right, insert right , pop root and continue
        # Initializing a queue
        q = []
        q.append(root)

        while(len(q) > 0):
            print(bin(q[0].data).replace("0b", ""))
            node = q.pop(0)
            
            #Enqueue left Child
            if node.left is not None:
                q.append(node.left)
            
            #Enqueue right Child
            if node.right is not None:
                q.append(node.right)
    


def genBinaryUptoN(N:int):
    root = Node(1)
    mTree = Tree()

    for i in range(2,N+1):
        mTree.insert(root,i)
        print("Insert" ,i , "\n")

    mTree.levelOrder(root)


genBinaryUptoN(7)