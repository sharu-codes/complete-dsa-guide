// sum of even numbers in an array

import java.util.Scanner;

public class p005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        int sum = 0;

        System.out.println("enter elements:");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
            if(arr[i] % 2 == 0)
                sum += arr[i];
        }

        System.out.println("sum of even numbers = " + sum);
        sc.close();
    }
}
