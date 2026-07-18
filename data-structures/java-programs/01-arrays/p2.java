// queue using an array and deque the last element

import java.util.Scanner;
public class p2 {
    static int[] queue;
    static int front = -1, rear = -1;

    static void enqueue(int val){
        if(rear == queue.length-1)
            System.out.println("queue overflow");
        else{
            if(front == -1) front = 0;
            queue[++rear] = val;
        }
    }

    static void dequeue(){
        if(front == -1 || front > rear)
            System.out.println("queue underflow");
        else
            System.out.println("deleted: " + queue[front++]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the size of the queue: ");
        int size = sc.nextInt();
        queue = new int[size];
        System.out.println("enter " + size + " elements to enqueue:");
        for (int i = 0; i < size; i++) {
            int val = sc.nextInt();
            enqueue(val); 
        }
        System.out.println("\nremoving an element:");
        dequeue(); 
        sc.close();
    }
}
