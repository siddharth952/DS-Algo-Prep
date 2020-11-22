# Morris can be used for InOrder, PreOrder Traversals but not PostOrder
# We try to make the tree linear
# Time O(N)
# Space O(1) 

class TreeNode:
    def __init__(self, val=0):
        self.data = val
        self.left = None
        self.right = None


class MorrisTraversal:
    
    def inOrder(self,root:TreeNode):
        current = root
        while current:
            # If left is null then print the node and go to right
            if current.left == None:
                print(current.data," ")
                current = current.right
            else:
                # Find predecessor
                predecessor = current.left
                # Find predecessor keep going to the right till right node is not null or right node is not current
                while predecessor.right and predecessor.right != current :
                    predecessor = predecessor.right
                
                # Now if right node is null then go left after establishing link from the predecessor to current 
                #       
                #       O
                #      O  O
                #     X     O
                #   O   O
                # O       0
                if predecessor.right == None:
                    predecessor.right = current
                    current = current.left # Go to to left node
                else:
                    # Its current itself hence left is already visited. Go right after visiting current
                    predecessor.right = None # Revert the work done
                    print(current.data, " ")
                    current = current.right




n1 = TreeNode(100)
n2 = TreeNode(50)
n3 = TreeNode(150)
n4 = TreeNode(25)
n5 = TreeNode(75)
n6 = TreeNode(125)
n7 = TreeNode(175)
n1.left, n1.right = n2, n3
n2.left, n2.right = n4, n5
n3.left, n3.right = n6, n7

Morris = MorrisTraversal()
Morris.inOrder(n1) 


