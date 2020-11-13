

# Empty Stack
# dequeue from queue and push to stack
# Enqueue contents of stack at back of queue
# Dequeue (Size-k) elements from front and enqueue one by one to same queue

from queue import Queue


def reverQueueFirstK(k:int , Queue):
    if Queue.empty() == True or k > Queue.qsize():
        return
    
    if k <= 0:
        return

    stack = []

    # Put first k elements into stack
    for i in range(k):
        stack.append(Queue.queue[0])
        Queue.get() # Pop from Queue

    #Enqueu contents of stack at back
    while len(stack) != 0 :
        Queue.put(stack[-1])
        stack.pop()

    # Remove remaining elements from queue and enqueue em at end of queue
    for i in range(Queue.qsize() - k):
        Queue.put(Queue.queue[0])
        Queue.get()


# Utility Function to print the Queue  
def Print(Queue): 
    while (not Queue.empty()):  
        print(Queue.queue[0], end =" ")  
        Queue.get() 
  
# Driver code  
if __name__ == '__main__': 
    Queue = Queue()  
    Queue.put(10)  
    Queue.put(20)  
    Queue.put(30)  
    Queue.put(40)  
    Queue.put(50)  
    Queue.put(60)  
    Queue.put(70)  
    Queue.put(80)  
    Queue.put(90)  
    Queue.put(100)  
  
    k = 5
    reverQueueFirstK(k, Queue)  
    Print(Queue)