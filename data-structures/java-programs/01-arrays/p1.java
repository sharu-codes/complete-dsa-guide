// stack using an array and pop the last value

import java.util.Scanner;
public class p1 {
    static int top = -1;
    static int[] stack;

    static void push(int val){
        if(top == stack.length-1)
            System.out.println("Stack Overflow");
        else{
            top++;
            stack[top] = val;
        }
    }

    static void pop(){
        if(top == -1)
            System.out.println("Stack Underflow");
        else{
            System.out.println("Popped: " + stack[top]);
            top--;
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the size of the stack: ");
        int size = sc.nextInt();
        stack = new int[size];
        System.out.print("enter the elements: ");
        for(int i=0;i<size;i++){
            int val = sc.nextInt();
            push(val);
        }
        System.out.println("\nremoving an element:");
        pop(); 
        sc.close();
    }
}
