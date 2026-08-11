class myQueue:
    def __init__(self, n):
        # Define Data Structures
        self.n = n
        self.queue = []

    
    def isEmpty(self):
        # Check if queue is empty
        return len(self.queue) == 0
            
            
    def isFull(self):
        # Check if queue is full
        return len(self.queue) == self.n


    def enqueue(self, x):
        # Enqueue
        if self.isFull():
            print("queue is full")
            return
        self.queue.append(x)

    
    def dequeue(self):
        # Dequeue
        if self.isEmpty():
            print("queue is empty")
            return
        self.queue.pop(0)

    
    def getFront(self):
        # Get front element
        if self.isEmpty():
            return -1
        return self.queue[0]
       
    
    def getRear(self):
        # Get rear element 
        if self.isEmpty():
            return -1
        return self.queue[-1]
        
        